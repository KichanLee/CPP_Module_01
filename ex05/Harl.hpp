/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichan <kichan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 21:08:08 by kichan            #+#    #+#             */
/*   Updated: 2023/12/01 23:07:23 by kichan           ###   ########.fr       */
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
};

#endif