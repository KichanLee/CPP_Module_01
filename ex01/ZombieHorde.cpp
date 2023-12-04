/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:36:32 by kichlee           #+#    #+#             */
/*   Updated: 2023/12/04 17:39:49 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie* zombieHorde(int N, std::string name)
{
    if(N < 0)
        return (NULL);
    Zombie *zombies = new Zombie[N];

    for(int i = 0; i < N; ++i)
    {
        zombies[i].SetName(name);
        zombies[i].announce();
    }
    
    return (zombies);
}

