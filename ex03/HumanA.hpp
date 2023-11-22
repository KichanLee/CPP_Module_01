/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:56:20 by kichlee           #+#    #+#             */
/*   Updated: 2023/11/22 15:56:31 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A
#define HUMAN_A

#include "Weapon.hpp"

class HumanA
{
private:
    std::string name;
    Weapon& wp;
    
public:
    HumanA(std::string name, Weapon& wp);
    ~HumanA();

    void    attack();

};


#endif