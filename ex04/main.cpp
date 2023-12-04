/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:15:12 by kichlee           #+#    #+#             */
/*   Updated: 2023/12/04 15:39:36 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

int main(int ac, const char *av[]) {
 
    if (ac != 4) {
        std::cout << "Wrong Arguments" << std::endl;
        return (1);
    }

    std::string filename = av[1];
    filename.c_str();
    std::string newfile = av[1];
    newfile.c_str();
    newfile.insert(newfile.size(),".replace");

    std::cout << newfile << std::endl;
    std::string toFind = av[2];
    toFind.c_str();
    std::string toAlter = av[3];
    toAlter.c_str();
    std::string text;
    size_t count = 0;

    std::ifstream in(filename);
    if (!in.is_open()){
        std::cout << "Can't Open " << filename << std::endl;
        return (1);
    }

    in.seekg(0, std::ios::end);
    int size = in.tellg();
    text.resize(size);
    in.seekg(0, std::ios::beg);
    in.read(&text[0], size);

    size_t pos = text.find(toFind);

    while (pos != std::string::npos) 
    {
        text.erase(pos, toFind.size());
        text.insert(pos, toAlter);
        ++count;
        pos = text.find(toFind, pos + toAlter.size());
    }
    std::ofstream file(newfile, std::ios::out);
    if(file.is_open())
    {
        file << text;
    }
    std::cout << text << std::endl;
    std::cout << "The string '" << toFind << "' was replaced " << count << " times." << std::endl;

    return (0);
}
