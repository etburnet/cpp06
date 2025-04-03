/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 12:10:15 by eburnet           #+#    #+#             */
/*   Updated: 2025/04/01 13:48:05 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "1 argument needed!" << std::endl;
		return (1);
	}
	std::string str = (std::string)argv[1];
	ScalarConverter::convert(str);
	return (0);
}