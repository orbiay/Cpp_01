/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <orbiay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 14:17:22 by orbiay            #+#    #+#             */
/*   Updated: 2022/08/25 14:56:36 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

int main()
{
	std :: string str;
	std :: string* stringPTR;
	std :: string& stringREF = str;
	str = "HI THIS IS BRAIN";
	stringPTR = &str;
	//////////////////////////////ADDRESS_MEMORY/////////////////////////////////////////
	std :: cout << "********************ADDRESS*****************************" << std :: endl;
	std :: cout << "The memory address of the string variable :  "<< &str << std :: endl;
	std :: cout << "The memory address held by stringPTR :  "<< stringPTR << std :: endl;
	std :: cout << "The memory address held by stringREF :  "<< &stringREF << std :: endl;
	//////////////////////////////VALUE//////////////////////////////////////////////////
	std :: cout << "\n********************VALUE*****************************" << std :: endl;
	std :: cout << "The value of the string variable :  "<< str << std :: endl;
	std :: cout << "The value pointed to by stringPTR :  "<< *stringPTR << std :: endl;
	std :: cout << "The value pointed to by stringREF :  "<< stringREF << std :: endl;
}