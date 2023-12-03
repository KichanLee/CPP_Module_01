/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:33:38 by kichlee           #+#    #+#             */
/*   Updated: 2023/12/03 18:55:24 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string h_name, Weapon& wp_refer) :  name(h_name), wp(wp_refer)
{

}
HumanA::~HumanA()
{
    
}

void    HumanA:: attack()
{
    std::cout << name << " attacks with his " << wp.getType() << std::endl;
}