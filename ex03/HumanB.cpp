/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:18:05 by kichlee           #+#    #+#             */
/*   Updated: 2023/12/04 17:39:21 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanB.hpp"

HumanB::HumanB(std::string h_name) : wp(NULL) {
    this->name = h_name;
}



HumanB::~HumanB()
{
}

void    HumanB:: setWeapon(Weapon& newWeapon)
{
    wp = &newWeapon;
}

void    HumanB:: attack()
{
    if(wp == NULL)
    {
        std::cout << "You have to get the Weapon First." << std::endl;
        return ;
    }
    std::cout << name << " attacks with his " << wp->getType() << std::endl;
}

