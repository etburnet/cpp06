/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 16:48:39 by eburnet           #+#    #+#             */
/*   Updated: 2025/04/24 11:06:06 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <iostream>
#include <ctime> 

Base *generate(void)
{
	int random = std::rand() % 3;
	if (random == 1)
		return new A;
	else if (random == 2)
		return new B;
	else
		return new C;
}

void identify(Base *p)
{
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "C" << std::endl;
}

void identify(Base &p)
{
	try 
	{
		A &a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "A" << std::endl;
	}
	catch (const std::exception& e)	{	}
	try 
	{
		B &b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "B" << std::endl;
	}
	catch (const std::exception& e)	{	}
	try 
	{
		C &c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "C" << std::endl;
	}
	catch (const std::exception& e)	{	}
}

int main()
{
	std::srand(std::time(0));
	Base *test = generate();
	std::cout << "---test *---" << std::endl;
	identify(test);
	std::cout << "---test &---" << std::endl;
	identify(*test);
	delete (test);
	return (0);
}