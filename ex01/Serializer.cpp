/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 15:00:40 by eburnet           #+#    #+#             */
/*   Updated: 2025/04/24 10:35:44 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(/* args */)
{
}

Serializer::~Serializer()
{
}

Serializer::Serializer(const Serializer &other)
{
	operator=(other);
}

const Serializer &Serializer::operator=(const Serializer &other)
{
	if (this == &other)
		return (*this);
	return (*this);
}

uintptr_t Serializer::serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data *Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}