/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etornay- <etornay-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 19:29:23 by etornay-          #+#    #+#             */
/*   Updated: 2024/06/26 19:44:54 by etornay-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon weapon)
{
}

HumanA::~HumanA(void)
{
}

void HumanA::Attack(void)
{
	std::cout << name << " attacks with " << weapon.getType() << std::endl;
}

void HumanA::setWeapon(Weapon weapon)
{
	this->weapon = weapon;
}
