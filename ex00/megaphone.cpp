/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: candrese <candrese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 03:01:32 by christian         #+#    #+#             */
/*   Updated: 2025/01/30 18:41:44 by candrese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

// using std::cout;
// using std::endl;
// std::transform(str.begin(), str.end(), str.begin(), ::toupper);

std::string capitalize(std::string str)
{
	size_t i = 0;
	while ( i < str.length())
	{
		str[i] = std::toupper(str[i]);
		i++;
	}
	return str;
}

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
		std::cout << capitalize(str);
		i++;
	}
	std::cout << std::endl;
	return 0;
}
