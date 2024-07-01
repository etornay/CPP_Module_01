/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etornay- <etornay-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 14:24:52 by etornay-          #+#    #+#             */
/*   Updated: 2024/07/01 16:18:57 by etornay-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Error: Invalid number of arguments" << std::endl;
		return (EXIT_FAILURE);
	}
	std::string	s1 = argv[2];
	std::string	s2 = argv[3];
	if (s1.empty() || s2.empty())
	{
		std::cout << "Error: Empty strings" << std::endl;
		return (EXIT_FAILURE);
	}
	
}