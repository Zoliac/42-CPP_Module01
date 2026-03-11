/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpatin <lpatin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 09:44:54 by lpatin            #+#    #+#             */
/*   Updated: 2026/02/25 09:46:01 by lpatin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//Pointeur du nouvel objet de zombie
Zombie	*newZombie(std::string name);

//Nouveau zombie dans la memoire
void	randomChump(std::string name);

int	main(void)
{
	Zombie	*z = newZombie("Alex");
	z->announce();
	randomChump("Bruno");
	delete z;
}