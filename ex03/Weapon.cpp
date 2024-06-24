/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etornay- <etornay-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 18:59:28 by etornay-          #+#    #+#             */
/*   Updated: 2024/06/24 19:52:49 by etornay-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
}

Weapon::Weapon(std::string str)
{
	this->type = str;
}

Weapon::~Weapon(void)
{
	std::cout << "Deleting " << this->type << ", see ya" << std::endl;
}

std::string Weapon::getType()
{
	return (this->type);
}
