/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <orbiay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 17:06:55 by orbiay            #+#    #+#             */
/*   Updated: 2022/08/26 16:43:34 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanB.hpp"

void HumanB::attack(void)
{
	std ::cout << name << " attacks with their\n" << weapon_type.getType();
}