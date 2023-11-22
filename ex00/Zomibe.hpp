/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zomibe.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:29:56 by kichlee           #+#    #+#             */
/*   Updated: 2023/11/22 13:29:57 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
private:
	std::string zobie_name;

public:
	Zombie(std::string name);
	~Zombie();

	void	announce(void);
};

#endif