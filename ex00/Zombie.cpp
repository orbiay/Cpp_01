/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <orbiay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 11:08:07 by orbiay            #+#    #+#             */
/*   Updated: 2022/08/24 12:17:18 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"
#include <iostream>

void Zombie::announce( void )
{
	std :: cout << name << " :";
	std :: cout << " BraiiiiiiinnnzzzZ...";
}
