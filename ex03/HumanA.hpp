/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:56:20 by kichlee           #+#    #+#             */
/*   Updated: 2023/12/03 17:53:38 by kichlee          ###   ########.fr       */
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
        HumanA(std::string h_name, Weapon& wp_refer);
        ~HumanA();

        void    attack();

};


#endif