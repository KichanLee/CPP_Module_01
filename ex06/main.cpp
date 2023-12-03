/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 14:55:11 by kichlee           #+#    #+#             */
/*   Updated: 2023/12/03 19:02:00 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char *av[])
{
    Harl hl;
    
    if(ac == 2)
        hl.filter(av[1]);
    else
        std::cout << "Argument Error!" << std::endl;

}