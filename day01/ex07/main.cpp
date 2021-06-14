/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 18:38:58 by ltouret           #+#    #+#             */
/*   Updated: 2021/06/14 22:09:52 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

int		args(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout << "Error : replace needs 3 arguments, filename, s1, s2" << std::endl;
		return (0);
	}
	if (!*argv[1] || !*argv[2] || !*argv[3])
	{
		std::cout << "Error : empty argument(s)." << std::endl;
		return (0);
	}
	return (1);
}

int		open_file(std::ifstream &input, std::ofstream &output, char *argv[])
{
	std::string		file;

	input.open(argv[1]);
	if (input.fail())
	{
		std::cout << "Error : Cant open input file." << std::endl;
		return (0);
	}

	file = argv[1];
	file += ".replace";
	output.open(file.c_str());
	if (output.fail())
	{
		std::cout << "Error : Cant open input file." << std::endl;
		return (0);
	}
	return (1);
}

void	replace(std::ifstream &input, std::ofstream &output, std::string s1, std::string s2)
{
	size_t				next;
	std::stringstream	buf;
	std::string			text;

	buf << input.rdbuf();
	text = buf.str();
	if (s1 != s2)
	{
		while ((next = text.find(s1)) != std::string::npos)
			text.replace(next, s1.length(), s2);
	}
	output << text;
	return ;
}

int		main(int argc, char *argv[])
{
	std::ifstream	input;
	std::ofstream	output;
	std::string		s1;
	std::string		s2;

	if (!(args(argc, argv)))
		return (1);
	s1 = argv[2];
	s2 = argv[3];
	if (!(open_file(input, output, argv)))
		return (1);
	replace(input, output, s1, s2);
	input.close();
	output.close();
	return 0;
}
