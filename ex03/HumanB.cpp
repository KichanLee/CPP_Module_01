/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:18:05 by kichlee           #+#    #+#             */
/*   Updated: 2023/11/22 16:06:31 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanB.hpp"

HumanB::~HumanB()
{
}

void    HumanB:: setWeapon(Weapon& newWeapon)
{
    wp = &newWeapon;
}

void    HumanB:: attack()
{
    std::cout << name << " attacks with his " << wp->getType() << std::endl;
}

