/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:02:17 by kichlee           #+#    #+#             */
/*   Updated: 2023/12/03 17:20:31 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::~Zombie()
{
    std::cout << "destuctor call!" << std::endl;
}

void	Zombie::SetName(std::string zombie_name)
{
    this->zombie_name = zombie_name;
}

void    Zombie::announce(void)
{
	std::cout << this->zombie_name << ": BraiiiiiiinnnzzzZ..."<< std::endl;
}