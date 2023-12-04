/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplace.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:53:46 by kichlee           #+#    #+#             */
/*   Updated: 2023/12/04 17:36:47 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileReplace.hpp"

FileReplace::FileReplace(const char *av[])
{
    this->filename = av[1];
    this->newfile = this->filename + ".replace";
    this->toFind = av[2];
    this->toAlter = av[3];
}

FileReplace::~FileReplace()
{

}

int FileReplace::getFile()
{
    this->in.open(this->filename.c_str());
    if (!this->in.is_open())
    {
        std::cout << "Can't Open : " << filename << std::endl;
        return 1;
    }

    this->in.seekg(0, std::ios::end);
    int size = in.tellg();
    this->text.resize(size);
    this->in.seekg(0, std::ios::beg);
    this->in.read(&this->text[0], size);
    std::cout << "std :: " << this->text << std::endl;
    
    return 0;
}

void    FileReplace::findWord()
{
    size_t pos = this->text.find(this->toFind);

    while(pos != std::string::npos)
    {
        this->text.erase(pos, this->toFind.size());
        this->text.insert(pos, this->toAlter);
        pos = this->text.find(this->toFind, this->toAlter.size());
    }  
}

int FileReplace::checkerror()
{
    if ((this->toFind).size() == 0)
        return (1);
    return (0);
}  

int FileReplace::replaceFile()
{
    this->out.open(this->newfile.c_str() , std::ios::trunc);
    if(!this->out.is_open())
    {
        std::cout << "Can't Open" << filename << std::endl;
        return (1);
    }
    
    this->out << this->text;
    return (0);
}