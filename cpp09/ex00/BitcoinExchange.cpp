#include "BitcoinExchange.hpp"

bool validateDate(struct tm _Nullable *time) {
  const int monthDays[2][12] = {
      {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
      {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};
  const int lapYear =
      isLapYear(static_cast<unsigned int>(time->tm_year + 1900));

  if (!(time->tm_mon >= 0 && time->tm_mday <= 11))
    return (false);
  if (!(time->tm_mday >= 1 &&
        time->tm_mday <= monthDays[lapYear][time->tm_mon]))
    return (false);
  return (true);
}

inline bool isLapYear(unsigned int year) {
  return (year % 4 == 0 && year % 100 == 0 && year % 400 == 0);
}

inline double ft_strtod(std::string const &str) {
  char *endOfConversion;
  double result;

  result = strtod(str.c_str(), &endOfConversion);
  if (endOfConversion == str.c_str())
    throw std::invalid_argument("ft_strtod: invalid argument");
  else if (errno == ERANGE)
    throw std::out_of_range("ft_strtod: double overflow...really??");
  return (result);
}

bool parseDbLine(std::string line, struct rateInfo &rateInfo,
                 std::string format) {
  char *successParseDate = NULL;
  struct tm date;
  std::string str;

  memset(&date, 0, sizeof(struct tm));
  successParseDate = strptime(line.c_str(), format.c_str(), &date);
  if (successParseDate == NULL)
    return (false);
  str = successParseDate;
  if (str.find(',') == std::string::npos)
    return (false);
  str = str.substr(str.find_first_not_of(" \t\r\n,"),
                   str.find_last_not_of(" \t\r\n") + 1);
  try {
    rateInfo.rate = ft_strtod(str);
    rateInfo.timestamp = mktime(&date);
  } catch (std::exception &err) {
    return (false);
  }
  return (true);
}

std::list<struct rateInfo> *loadDatabase(std::string filename) {
  std::ifstream file(const_cast<const char *>(filename.c_str()));
  std::string line;
  std::list<struct rateInfo> *lst;
  struct rateInfo rateInfo;

  if (file.is_open() != true) {
    std::cerr << "Error: Can't connect to database" << std::endl;
    return (NULL);
  }
  getline(file, line);
  lst = new std::list<struct rateInfo>();
  while (getline(file, line)) {
    if (parseDbLine(line, rateInfo) == true) {
      lst->push_back(rateInfo);
    } else {
      std::cerr << "Error: Corrupted database" << std::endl;
      delete lst;
      return (NULL);
    }
  }
  return (lst);
}

bool parseFileLine(std::string line, struct rateInfo &rateInfo,
                   std::string format) {
  char *successParseDate = NULL;
  struct tm date;
  std::string str;

  memset(&date, 0, sizeof(struct tm));
  successParseDate = strptime(line.c_str(), format.c_str(), &date);
  if (successParseDate == NULL)
    throw std::logic_error(
        (std::string("Error: bad input => ") + line).c_str());
  str = successParseDate;
  if (str.find('|') == std::string::npos)
    throw std::logic_error(
        (std::string("Error: bad input => ") + line).c_str());
  str = str.substr(str.find_first_not_of(" \t\r\n|"),
                   str.find_last_not_of(" \t\r\n") + 1);
  try {
    rateInfo.rate = ft_strtod(str);
  } catch (std::exception &err) {
    throw std::logic_error(
        (std::string("Error: invalid number => ") + line).c_str());
  }
  if (rateInfo.rate < 0)
    throw std::logic_error("Error: not a positive number");
  if (rateInfo.rate > 1000)
    throw std::logic_error("Error: too large a number");
  rateInfo.timestamp = mktime(&date);
  return (true);
}

double findFirstOrClosest(struct rateInfo &ref,
                          std::list<struct rateInfo> &db) {
  std::list<struct rateInfo>::iterator it;

  for (it = db.begin(); it != db.end(); ++it) {
    if (it->timestamp == ref.timestamp) {
      return (it->rate * ref.rate);
    } else if (it->timestamp > ref.timestamp) {
      --it;
      return (it->rate * ref.rate);
    }
  }
  return (0);
}

void queryFile(std::string fileName, std::list<struct rateInfo> &db) {
  std::ifstream file(const_cast<const char *>(fileName.c_str()));
  std::string line;
  std::string outLine;
  struct tm dateRef;
  struct rateInfo rateRef;
  char tempDate[14];

  if (file.is_open() != true) {
    std::cerr << "Error! invlaid filename" << std::endl;
    return;
  }
  getline(file, line);
  while (getline(file, line)) {
    memset(&rateRef, 0, sizeof(struct rateInfo));
    memset(&dateRef, 0, sizeof(struct tm));
    memset(&tempDate, 0, sizeof(tempDate));
    try {
      (void)parseFileLine(line, rateRef);
      strptime(line.c_str(), "%Y-%m-%d", &dateRef);
      strftime(tempDate, sizeof(tempDate), "%Y-%m-%d = ", &dateRef);
      outLine = tempDate;
      std::cout << outLine << rateRef.rate << " = "
                << findFirstOrClosest(rateRef, db) << std::endl;
    } catch (std::exception &err) {
      std::cerr << err.what() << std::endl;
    }
  }
  return;
}
