/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etornay- <etornay-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 18:25:41 by etornay-          #+#    #+#             */
/*   Updated: 2024/06/18 19:06:05 by etornay-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string)
{
	this->name = name;
}

Zombie::~Zombie(void)
{
	std::cout << "" << this->name << "" << std::endl;
}

std::string Zombie::getName()
{
	return (this->name);
}

void announce()
{
	std::cout << this->getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
