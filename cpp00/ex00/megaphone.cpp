/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 20:29:01 by atahtouh          #+#    #+#             */
/*   Updated: 2025/03/04 16:17:10 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    int i = 1;
    int j = 1;
    if (ac > i)
    {
        while (j < ac)
        {
            i = 0;
            while (av[j][i])
            {
                std::cout<< (char)toupper(av[j][i]);
                i++;
            }
            std::cout<<" ";
            j++;
        }
        
       std :: cout << std::endl;
    }
    else
        std :: cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}