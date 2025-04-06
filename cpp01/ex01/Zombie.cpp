/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmae <asmae@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 00:14:42 by asmae             #+#    #+#             */
/*   Updated: 2025/04/03 19:43:39 by asmae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie :: Zombie() : name("Unnamed Zombie"){}

Zombie :: Zombie(std::string name) : name(name){}

void Zombie ::announce(void)
{
    std::cout<< name << ": BraiiiiiiinnnzzzZ..."<< std::endl;
}

Zombie :: ~Zombie()
{
    std::cout<< name << "has been destroyed"<<std :: endl;
}