/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 10:29:24 by rertzer           #+#    #+#             */
/*   Updated: 2023/03/23 13:10:14 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	const int	N = 4;

	std::cout << "creation d'une horde de Zombies et ecoute de leurs doux cris" << std::endl;

	Zombie* horde = zombieHorde(N, "Dolly");

	for (int i = 0 ; i < N ; i++)
	{
		std::cout << "\nO toi le Zombie " << i <<", nous t'ecoutons " << std::endl;
		horde[i].announce();
	}
	std::cout << "\nFin du programme. Dis au revoir a nos amis" << std::endl;
	delete [] horde;
	return (0);
}
