/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 11:31:10 by eburnet           #+#    #+#             */
/*   Updated: 2025/04/24 10:35:37 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::~ScalarConverter()
{
}

ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
	operator=(other);
}

ScalarConverter & ScalarConverter::operator=(const ScalarConverter &other)
{
	if (this == &other)
		return (*this);
	return (*this);
}

int ScalarConverter::convert(const std::string &str)
{
	long l = 0;
	int	y = 0;
	int	len = str.length();
	float f;
	int i;
	char c;
	double d;
	std::string s[6] = {"-inf", "+inf", "nan", "-inff", "+inff", "nanf"};
	if (str.empty())
		return (std::cerr << "str i empty" << std::endl, 1);
	if (std::isprint(str[0]) && !std::isdigit(str[0]) && str[1] == '\0')
	{	
		c = static_cast<char>(str[0]);
		std::cout << "char: " << c << std::endl;
		std::cout << "int: " << static_cast<int>(c) << std::endl;
        std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
	}
	if (str[0] == '-' || str[0] == '+')
		y++;
	while (std::isdigit(str[y]))
		y++;
	if (y == len)
	{
		l = strtol(str.c_str(), NULL, 10);
		i = static_cast<int>(l);
		if (errno == ERANGE || l > INT_MAX || l < INT_MIN)
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: impossible" << std::endl;
			std::cout << "bool: impossible" << std::endl;
			return (0);
		}
		if (std::isprint(static_cast<char>(l)))
			std::cout << "char: " << static_cast<char>(i) << std::endl;
		else
			std::cout << "char:  Non displayable" << std::endl;
		std::cout << "int: " << i << std::endl;
		std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
	}
	else if (str[y] == '.')
	{
		std::cout << str[len - 1] << std::endl;
		if (str[len - 1] == 'f')
		{
			f = std::atof(str.c_str());
			if (std::isprint(static_cast<char>(l)))
				std::cout << "char: " << static_cast<char>(l) << std::endl;
			else
				std::cout << "char:  Non displayable" << std::endl;
			std::cout << "int: " << static_cast<int>(f) << std::endl;
			std::cout << "float: " << f << "f" << std::endl;
			std::cout << "double: " << static_cast<double>(f) << std::endl;
		}
		else
		{
			d = std::atof(str.c_str());
			if (std::isprint(static_cast<char>(l)))
				std::cout << "char: " << static_cast<char>(l) << std::endl;
			else
				std::cout << "char: impossible" << std::endl;
			std::cout << "int: " << static_cast<int>(d) << std::endl;
			std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
			std::cout << "double: " << d << std::endl;
		}

	}
	else if (str == s[0] || str == s[3])
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: -inff" << std::endl;
		std::cout << "bool: -inf" << std::endl;
	}
	else if (str == s[1] || str == s[4])
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: +inff" << std::endl;
		std::cout << "bool: +inf" << std::endl;
	}
	else if (str == s[2] || str == s[5])
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "bool: nan" << std::endl;
	}
	else
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "bool: impossible" << std::endl;
	}
	return (0);
}
