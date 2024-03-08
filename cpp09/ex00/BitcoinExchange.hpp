#pragma once

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <ctime>
# include <cstdlib>
# include <cstring>
# include <iostream>
# include <fstream>
# include <exception>
# include <list>

# ifndef _NULLABLE_
#  define _NULLABLE_
#  define _Nullable
# endif // _NULLABLE_

typedef struct rateInfo
{
	time_t	timestamp;
	double	rate;
}	t_rateInfo;

/* aux */
inline double			ft_strtod(std::string const &str);
inline bool			isLapYear(unsigned int year);
bool				validateDate(struct tm _Nullable *time);

/* Database File parsing /query */
bool				parseDbLine(std::string line, struct rateInfo &addr, std::string format = "%Y-%m-%d");
std::list<struct rateInfo>	*loadDatabase(std::string filename);
double				findFirstOrClosest(struct rateInfo &ref, std::list<struct rateInfo> &db);
void				queryFile(std::string fileName, std::list<struct rateInfo> &db);

/* File parsing */
bool				parseFileLine(std::string line, struct rateInfo &rateInfo, std::string format = "%Y-%m-%d");

#endif // BITCOINEXCHANGE_HPP
