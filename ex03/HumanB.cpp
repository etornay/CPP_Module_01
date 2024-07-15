/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etornay- <etornay-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 19:29:45 by etornay-          #+#    #+#             */
/*   Updated: 2024/07/10 18:06:53 by etornay-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

/* HumanB::HumanB(void)
{
	
}*/

HumanB::HumanB(std::string name)
{
	this->name = name;
	std::cout << "HumanB " << name << " has appeared too." << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << "HumanB " << name << " fled the place." << std::endl;
}

void HumanB::Attack(void)
{
	if (!this->weapon)
	{
		std::cout << this->name << " attacks with his bare hands" << std::endl;
	}
	else
		std::cout << this->name << " attacks with " << this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
