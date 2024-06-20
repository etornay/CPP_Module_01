/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etornay- <etornay-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 18:25:41 by etornay-          #+#    #+#             */
/*   Updated: 2024/06/20 14:49:30 by etornay-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
}

Zombie::Zombie(std::string str)
{
	this->name = str;
}

Zombie::~Zombie(void)
{
	std::cout << "Deleting " << this->name << ", see ya" << std::endl;
}

std::string Zombie::getName()
{
	return (this->name);
}

void Zombie::announce()
{
	std::cout << this->getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
