/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:29:56 by kichlee           #+#    #+#             */
/*   Updated: 2023/12/03 19:14:32 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
private:
	std::string zombie_name;
public:
	Zombie();
	~Zombie();
	void	SetName(std::string zobie_name);
	void	announce(void);
};

Zombie* zombieHorde(int N, std::string name );

#endif