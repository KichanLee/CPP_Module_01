/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:56:04 by kichlee           #+#    #+#             */
/*   Updated: 2023/11/22 15:56:33 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


Weapon::Weapon()
{

}
Weapon::Weapon(std::string type)
{
    setType(type);
}

Weapon::~Weapon()
{   
}

const   std::string& Weapon::getType()
{
    return (type);
}

void    Weapon::setType(std::string type)
{
    this->type = type;
}