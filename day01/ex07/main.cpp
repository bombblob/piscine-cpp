// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/22 18:44:35 by acarlson          #+#    #+#             //
//   Updated: 2019/01/22 20:19:16 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Usage: " << argv[0] << " filename str1 str2" << std::endl;
		return (1);
	}
	std::ifstream ifs(argv[1]);
	std::string s = argv[2];
	std::string r = argv[3];
	if (s.length() < 1)
	{
		std::cerr << "OwO that's a tiny widdwe pawametew" << std::endl;
		return (1);
	}
	char *a = strcat(argv[1] , ".replace");
	std::ofstream ofs(a);
	std::string readout;
	while (getline(ifs, readout))
	{
		for (int i = 0; readout[i]; i++)
		{
			if (readout.substr(i, s.length()) == s)
			{
				ofs << r;
				i += s.length() - 1;
			}
			else
				ofs << (char)readout[i];
		}
		ofs << std::endl;
	}
}
