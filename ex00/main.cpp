/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etornay- <etornay-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 12:44:40 by etornay-          #+#    #+#             */
/*   Updated: 2024/06/19 13:48:16 by etornay-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *zombie1 = new Zombie("Abeja");
	zombie1->announce();
	Zombie *zombie2 = newZombie("Luna");
	zombie2->announce();
	randomChump("Fliki");
	delete zombie1;
	delete zombie2;
}