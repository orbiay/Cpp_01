/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <orbiay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 11:03:44 by orbiay            #+#    #+#             */
/*   Updated: 2022/08/24 12:17:00 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
class Zombie{
	std :: string name;
	void announce( void );
public:
	void randomChump( std::string name );
	Zombie* newZombie( std::string name );
};
#endif
