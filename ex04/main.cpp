/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <orbiay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 18:38:43 by orbiay            #+#    #+#             */
/*   Updated: 2022/08/27 15:09:22 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std :: string ft_replace(std ::string buffer, int pos,std :: string s1, std :: string s2)
{
	buffer.erase(pos,s1.length());
	buffer.insert(pos,s2);
	return (buffer);
}
int main ()
{
	std :: string filename;
	std :: string s1;
	std :: string buf;
	std :: string s2;
	size_t		pos = 1;
	std :: cout << "Enter filename :" << std :: ends;
	getline(std :: cin,filename);
	std :: cout << "Enter S1 :" << std :: ends;
	getline(std :: cin,s1);
	std :: cout << "Enter S2 :" << std :: ends;
	getline(std :: cin,s2);
	std :: ifstream id_filename;
	std :: ofstream id_filereplace(filename + ".replace");
	id_filename.open(filename);
	while (getline (id_filename, buf)) {
  		while (pos >= 0)
		{
			pos = buf.find(s1);
			if (pos  == -1)
				break;
			if (pos >= 0)
			{
				buf = ft_replace(buf,pos,s1,s2);
				pos += s2.length();
			}
		}
		id_filereplace <<buf << "\n";
	}
	return (0);
}