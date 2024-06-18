/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etornay- <etornay-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 14:26:52 by etornay-          #+#    #+#             */
/*   Updated: 2024/06/18 19:01:58 by etornay-         ###   ########.fr       */
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
			Zombie(std::string);
			~Zombie(void);
			void announce(void);
			std::string getName(void);
};

Zombie *newZombie(std::string name);
void 	randomChump(std::string name);
#endif
