/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etornay- <etornay-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 19:29:23 by etornay-          #+#    #+#             */
/*   Updated: 2024/06/27 19:07:54 by etornay-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon)
{
	this->name = name;
	std::cout << "HumanA " << name << " has appeared." << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout << "HumanA " << name << " left the place." << std::endl;
}

void HumanA::Attack(void)
{
	std::cout << this->name << " attacks with " << weapon.getType() << std::endl;
}

void HumanA::setWeapon(Weapon weapon)
{
	this->weapon = weapon;
}
