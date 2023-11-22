/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:33:38 by kichlee           #+#    #+#             */
/*   Updated: 2023/11/22 16:08:48 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::~HumanA()
{
}

HumanA::HumanA(std::string name, Weapon& wp) :  wp(wp) 
{
    this->name = name;
}


void    HumanA:: attack()
{
    std::cout << name << " attacks with his " << wp.getType() << std::endl;
}