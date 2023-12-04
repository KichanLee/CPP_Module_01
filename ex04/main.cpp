/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:15:12 by kichlee           #+#    #+#             */
/*   Updated: 2023/12/04 17:37:07 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileReplace.hpp"

int main(int ac, const char *av[]) {
 
    if (ac != 4) {
        std::cout << "Wrong Arguments" << std::endl;
        return (1);
    }

    FileReplace fp(av);
    
    if(fp.checkerror())
        return (1);
    if(fp.getFile() == 0)
    {
        fp.findWord();
        fp.replaceFile();
    }


    return (0);
}
