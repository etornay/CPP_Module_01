/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etornay- <etornay-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 13:34:11 by etornay-          #+#    #+#             */
/*   Updated: 2024/07/15 14:44:23 by etornay-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int N = 3;
	Zombie *zombies = zombieHorde(N, "Carlitos");
	for (int i = 0; i < N; i++)
		zombies[i].announce();
	delete[] zombies;
}
