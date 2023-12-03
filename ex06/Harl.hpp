/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 21:08:08 by kichan            #+#    #+#             */
/*   Updated: 2023/12/03 15:08:49 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>
#include <iostream>

class Harl
{

private:
    void        debug(void);
    void        info(void);
    void        warning(void);
    void        error(void);
    void        (Harl::*SetfuncPtr_list[4])(void);
    std::string strarray[4];

public:
    Harl();
    ~Harl();
    void    complain(std::string level);
    void    filter(std::string level);
};

#endif