/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:02:17 by kichlee           #+#    #+#             */
/*   Updated: 2023/11/22 13:53:02 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zomibe.hpp"

Zombie::Zombie(std::string name)
{
	zobie_name = name;
}

Zombie::~Zombie()
{
    std::cout << "destuctor call!" << std::endl;
}
