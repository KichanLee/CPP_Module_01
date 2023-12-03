/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 14:44:56 by kichlee           #+#    #+#             */
/*   Updated: 2023/12/03 14:48:34 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl    hl;
    
    hl.complain("DEBUG");
    hl.complain("INFO");
    hl.complain("WARNING");
    hl.complain("ERROR");
}