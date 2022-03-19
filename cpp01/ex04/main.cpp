/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melghoud <melghoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 17:20:13 by melghoud          #+#    #+#             */
/*   Updated: 2022/02/12 19:25:13 by melghoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

#include <fstream>

int main(int argc, char **arv)
{
	if (argc != 4)
	{
		std::cout << "invalid arguments" << std::endl;
		return 1;
	}
	std::string s1(arv[2]);
	std::string s2(arv[3]);
	std::ifstream infile;
	std::ofstream outfile;
	infile.open(arv[1]);
	if (!infile.is_open())
	{
		std::cout << "error file not found" <<std::endl;
		return 1;
	}
	std::string output(arv[1]);
	output += ".replace";
	outfile.open(output, std::ios::out);
	if (!outfile.is_open())
	{
		std::cout << "error can't be opned" <<std::endl;
		return 1;
	}
	std::string line;
	while (std::getline(infile, line))
	{
		if (line.empty())
		{
			outfile << "\n";
			continue;
		}
		size_t pos = 0;
		if (s1.empty())
		{
			outfile << line << '\n';
			continue;
		}
		while ((pos = line.find(s1, pos)) != std::string::npos)
		{
			line.erase(pos, s1.size());
			line.insert(pos, s2);
			pos = pos + s2.size();
		}
		outfile << line << '\n';
	}
	return 0;
}