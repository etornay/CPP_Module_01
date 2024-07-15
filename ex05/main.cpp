/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etornay- <etornay-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 18:16:02 by etornay-          #+#    #+#             */
/*   Updated: 2024/07/09 15:08:04 by etornay-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl harl;
	(void)argv;
	if (argc != 2)
	{
		std::cout << "Invalid number of arguments" << std::endl;
		return (0);
	}
	harl.complain(argv[1]);
	return (1);
}
