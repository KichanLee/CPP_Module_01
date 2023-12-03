/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichan <kichan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 21:11:07 by kichan            #+#    #+#             */
/*   Updated: 2023/12/01 23:11:20 by kichan           ###   ########.fr       */
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
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void    Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void    Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void    Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Harl::complain(std::string level)
{
    for(int i = 0; i < 4; i++)
    {
        if(level == strarray[i])
        {
            (this->*SetfuncPtr_list[i])();
        }
    }
}
