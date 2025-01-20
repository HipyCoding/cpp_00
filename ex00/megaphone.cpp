/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christian <christian@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 03:01:32 by christian         #+#    #+#             */
/*   Updated: 2025/01/20 17:54:34 by christian        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <algorithm>

int main(int argc, char **argv)
{
	int	i = 1;
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	while (i < argc)
	{
		std::string str(argv[i]);
		std::transform(str.begin(), str.end(), str.begin(), ::toupper);
		std::cout << str;
		i++;
	}
	std::cout << std::endl;
	return 0;
}
