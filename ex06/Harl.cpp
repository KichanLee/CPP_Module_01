/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 21:11:07 by kichan            #+#    #+#             */
/*   Updated: 2023/12/03 18:37:22 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
    SetfuncPtr_list[0] = &Harl::debug;
    SetfuncPtr_list[1] = &Harl::info;
    SetfuncPtr_list[2] = &Harl::warning;
    SetfuncPtr_list[3] = &Harl::error;
    strarray[0] = "DEBUG";
    strarray[1] = "INFO";
    strarray[2] = "WARNING";
    strarray[3] = "ERROR";
}

Harl::~Harl()
{
}

void    Harl::debug(void)
{
    std::cout << "[ DEBUG ] " << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n" << std::endl;
}

void    Harl::info(void)
{
    std::cout << "[ INFO ] " << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << std::endl;
}

void    Harl::warning(void)
{
    std::cout << "[ WARNING] " << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month.\n" << std::endl;
}

void    Harl::error(void)
{
    std::cout << "[ ERROR ] " << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

void    Harl::filter(std::string level)
{
    int num = 0;
    
    for(int i = 0; i < 4 ; ++i)
    {
        if(strarray[i] == level)
            num = i;
    }

    switch (num)
    {
        case 0 :
            (this->*SetfuncPtr_list[0])();
            __attribute__((fallthrough));
        case 1 :
            (this->*SetfuncPtr_list[1])();
            __attribute__((fallthrough));
        case 2 :
            (this->*SetfuncPtr_list[2])();
            __attribute__((fallthrough));
        case 3 :
            (this->*SetfuncPtr_list[3])();
            break;
        default :
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
    }    
}



