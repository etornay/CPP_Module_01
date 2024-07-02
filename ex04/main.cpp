/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etornay- <etornay-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 14:24:52 by etornay-          #+#    #+#             */
/*   Updated: 2024/07/02 18:00:18 by etornay-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <fstream>
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
	std::ifstream file(argv[1]);
	if (!file.is_open())
	{
		std::cout << "Error: Opening INPUT file" << std::endl;
		return (EXIT_FAILURE);
	}
	std::string newfile = argv[1];
	newfile += ".replace";
	std::ofstream outfile(newfile.c_str());
	if (!outfile.is_open())
	{
		std::cout << "Error: Opening OUTPUT file" << std::endl;
		return (EXIT_FAILURE);
	}
	std::string line;
	while (std::getline(file, line))
	{
		size_t	i = 0;
		while ((i = line.find(s1, i)) != std::string::npos)
		{
			line.replace(i, s1.length(), s2);
			i += s2.length();
		}
		outfile << line << std::endl;
	}
	file.close();
	outfile.close();
	return (EXIT_SUCCESS);
}
