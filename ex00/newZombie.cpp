/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 16:03:00 by kichlee           #+#    #+#             */
/*   Updated: 2023/12/03 16:48:23 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// heap
#include "Zombie.hpp"

Zombie* make_zombie(std::string name)
{
    Zombie  *zb_two = new Zombie(name);   
    
    return (zb_two);
}