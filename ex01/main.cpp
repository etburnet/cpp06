/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 16:27:24 by eburnet           #+#    #+#             */
/*   Updated: 2025/04/01 16:30:27 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Data salut;

	salut.i = 15;
	uintptr_t test = Serializer::serialize(&salut);
	Data *chao = Serializer::deserialize(test);
	std::cout << chao->i << std::endl;
}