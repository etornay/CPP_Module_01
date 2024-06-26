/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etornay- <etornay-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 19:30:00 by etornay-          #+#    #+#             */
/*   Updated: 2024/06/26 18:08:34 by etornay-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HumanB_HPP
# define HumanB_HPP
# include <iostream>
# include "Weapon.hpp"

class HumanB
{
	private:
			std::string name;
			Weapon weapon;
			
	public:
			HumanB(std::string name, Weapon weapon);
			~HumanB(void);
			void Attack(void);
			void setWeapon(Weapon weapon);
};
#endif