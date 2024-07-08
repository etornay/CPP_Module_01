/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etornay- <etornay-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 18:16:02 by etornay-          #+#    #+#             */
/*   Updated: 2024/07/08 19:07:56 by etornay-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl *harl = new Harl();
	harl->complain("DEBUG");
	harl->complain("INFO");
	harl->complain("WARNING");
	harl->complain("ERROR");
	delete(harl);
	return (0);
}
