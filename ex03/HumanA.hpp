/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etornay- <etornay-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 19:29:36 by etornay-          #+#    #+#             */
/*   Updated: 2024/06/27 19:07:38 by etornay-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HumanA_HPP
# define HumanA_HPP
# include <iostream>
# include "Weapon.hpp"

class HumanA
{
	private:
			std::string name;
			Weapon &weapon;
			
	public:
			HumanA(std::string name, Weapon &weapon);
			~HumanA(void);
			void Attack(void);
			void setWeapon(Weapon weapon);
};
#endif