/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etornay- <etornay-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 14:26:52 by etornay-          #+#    #+#             */
/*   Updated: 2024/07/15 14:56:46 by etornay-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie
{
	private:
			std::string name;
			
	public:
			Zombie(void);
			Zombie(std::string);
			~Zombie(void);
			void announce(void);
			void getName(std::string str);
};

Zombie *zombieHorde(int N, std::string str);
#endif
