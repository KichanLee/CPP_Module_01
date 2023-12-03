/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 16:10:58 by kichlee           #+#    #+#             */
/*   Updated: 2023/12/03 18:49:54 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie cc("wonie");
    
    cc.announce();

    Zombie *zb = make_zombie("Foo");
    zb->announce();
    RandomChump("Foo");
    
    delete zb;
}