/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplace.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:51:33 by kichlee           #+#    #+#             */
/*   Updated: 2023/12/04 17:35:10 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILEREPLACE_HPP
#define FILEREPLACE_HPP

#include <fstream>
#include <iostream>
#include <string>

class FileReplace
{
    private:
        std::string     filename;
        std::string     newfile;
        std::string     toFind;
        std::string     toAlter;
        std::string     text;
        std::ifstream   in;
        std::ofstream   out;

    public:
        FileReplace(const char *av[]);
        ~FileReplace();

        int		getFile();
        void    findWord();
		int 	replaceFile();
        int     checkerror();
    };

#endif