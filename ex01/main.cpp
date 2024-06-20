/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etornay- <etornay-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 13:34:11 by etornay-          #+#    #+#             */
/*   Updated: 2024/06/20 14:52:59 by etornay-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int N = 10;
	Zombie *zombies = zombieHorde(N, "Carlitos");
	for (int i = 0; i < N; i++)
		zombies->announce();
	delete[] zombies;
}
