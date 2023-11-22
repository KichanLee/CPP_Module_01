/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:36:32 by kichlee           #+#    #+#             */
/*   Updated: 2023/11/22 14:03:30 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{

    // 생성자 사용하여 입력하는 방법
    Zombie* zomibes = new Zombie[N];

    for(int i = 0; i < N; ++i)
    {
        zomibes[i] = new Zomibe(name);
    }
    

    // 생성자 없이 입력하는 방법
    Zombie* zzb = new Zombie[N];
    
    for(int i = 0; i < N; ++i)
    {
        zzb->Zomibe[i].name = name;
    }

    // Zombie* zzb;
    // for(int i = 0; i < N; ++i)
    // {
    //     zzb[i] = new Zombie(name);
    // }

    // return (zzb);
}