/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etornay- <etornay-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 19:00:40 by etornay-          #+#    #+#             */
/*   Updated: 2024/06/26 18:48:10 by etornay-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class Weapon
{
	private:
			std::string type;
			
	public:
			Weapon(void);
			Weapon(std::string);
			~Weapon(void);
			const std::string &getType(void);
			void setType(std::string type);
};
#endif
