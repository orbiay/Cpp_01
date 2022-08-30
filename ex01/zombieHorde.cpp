/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <orbiay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 10:59:51 by orbiay            #+#    #+#             */
/*   Updated: 2022/08/25 11:36:32 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

Zombie* Zombie::zombieHorde( int N, std::string name )
{
	Zombie *zombies;
	int i = 0;
	zombies = new Zombie[N];
	while (i < N)
	{
		zombies[i].name = name;
		i++;
	}
	i = 0;
	while (i < N)
	{
		std :: cout << i;
		zombies->announce();
		std :: cout << "\n";
		i++;
	}
	return zombies;
}