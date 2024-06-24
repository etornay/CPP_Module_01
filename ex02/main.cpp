/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etornay- <etornay-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 14:55:54 by etornay-          #+#    #+#             */
/*   Updated: 2024/06/24 18:57:13 by etornay-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Memory address of the string variable: " << &str << "\nMemory address held by stringPTR: " << stringPTR << "\nMemory address held by stringREF: " << &stringREF << std::endl;
	std::cout << "-----------------------------------------------------" << std::endl;
	std::cout << "Value of the string valuable: " << str << "\nValue pointed to by stringPTR: " << *stringPTR << "\nValue pointed to by stringREF: " << stringREF << std::endl;
}
