/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etornay- <etornay-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 19:30:00 by etornay-          #+#    #+#             */
/*   Updated: 2024/06/27 19:20:05 by etornay-         ###   ########.fr       */
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
			Weapon *weapon;
			
	public:
			HumanB(std::string name);
			~HumanB(void);
			void Attack(void);
			void setWeapon(Weapon &weapon);
};
#endif