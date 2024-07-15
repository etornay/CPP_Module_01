/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etornay- <etornay-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 18:16:18 by etornay-          #+#    #+#             */
/*   Updated: 2024/07/09 17:03:47 by etornay-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP
# include <iostream>

class Harl
{
	private:
			void debug(void);
			void info(void);
			void warning(void);
			void error(void);
			
	public:
			Harl(void);
			~Harl(void);
			void complain(std::string level);
};

#endif
