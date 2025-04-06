/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmae <asmae@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 00:14:15 by asmae             #+#    #+#             */
/*   Updated: 2025/04/03 19:45:40 by asmae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie( std::string name );
void randomChump( std::string name );
Zombie* zombieHorde( int N, std::string name );


int main() {
    int N = 5;
    Zombie* horde = zombieHorde(N, "HordeZombie");
    
    for (int i = 0; i < N; i++)
        horde[i].announce();
    
    delete[] horde;
    return 0;
}