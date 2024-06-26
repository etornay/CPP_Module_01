/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etornay- <etornay-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 19:29:45 by etornay-          #+#    #+#             */
/*   Updated: 2024/06/26 19:53:50 by etornay-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name, Weapon weapon)
{
}

HumanB::~HumanB(void)
{
}

void HumanB::Attack(void)
{
	if (weapon)
		std::cout << name << " attacks with " << weapon.getType() << std::endl;
	else
		std::cout << name << " has not any weapon " << std::endl;
}

void HumanB::setWeapon(Weapon weapon)
{
	this->weapon = weapon;
}
