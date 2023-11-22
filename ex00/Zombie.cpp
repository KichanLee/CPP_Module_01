/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:02:17 by kichlee           #+#    #+#             */
/*   Updated: 2023/11/22 13:25:10 by kichlee          ###   ########.fr       */
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

void	Zombie::announce(void)
{
	std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}

