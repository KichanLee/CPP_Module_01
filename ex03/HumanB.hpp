/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:18:05 by kichlee           #+#    #+#             */
/*   Updated: 2023/12/03 17:56:28 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_CPP
#define HUMANB_CPP

#include "Weapon.hpp"

class HumanB
{
    private:
        std::string name;
        Weapon* wp;
    
    public:
        HumanB(std::string h_name);
        ~HumanB();
        void    setWeapon(Weapon& newWeapon);
        void    attack();
};


#endif