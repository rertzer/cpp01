/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 10:29:24 by rertzer           #+#    #+#             */
/*   Updated: 2023/03/23 10:58:42 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	std::cout << "creation d'un Zombie et ecoute de son doux cri" << std::endl;
	Zombie	first_zombie("Bob");
	first_zombie.announce();

	std::cout << "\ncreation d'un autre Zombie et ecoute de son doux cri" << std::endl;
	Zombie	second_zombie("Alice");
	second_zombie.announce();

	std::cout << "\nLe premier zombie s'exprime a nouveau" << std::endl;
	first_zombie.announce();

		std::cout << "\nCreation d'un newZombie" << std::endl;
	Zombie*	heap_zombie = newZombie("Charly");
	std::cout << "newZombie va prendre la parole:" << std::endl;
	heap_zombie->announce();
	std::cout << "\nMalheureusememt newZombie doit nous quitter" << std::endl;
	delete (heap_zombie);

	std::cout << "\nRandomChump fait le zombie" << std::endl;
	randomChump("Dorothee");

	std::cout << "\nFin du programme. Dis au revoir a nos amis" << std::endl;
	return (0);
}
