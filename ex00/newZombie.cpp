/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <orbiay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 11:49:47 by orbiay            #+#    #+#             */
/*   Updated: 2022/08/24 13:26:42 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

Zombie* Zombie::newZombie( std::string name )
{
	Zombie* new_zombie = new Zombie;
	new_zombie->name = name;
	return (new_zombie);
}