/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etornay- <etornay-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 18:58:07 by etornay-          #+#    #+#             */
/*   Updated: 2024/07/10 18:06:19 by etornay-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
	{
		Weapon club = Weapon("crude spiked club.");

		HumanA elias("Elias", club);
		elias.Attack();
		club.setType("some other type of club.");
		elias.Attack();
	}
	{
		Weapon club = Weapon("crude spiked club.");
		
		HumanB jim("Jim");
		jim.Attack();
		club.setType("some other type of club.");
		jim.Attack();
	}
	return (0);
}
