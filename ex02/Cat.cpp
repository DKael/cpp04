/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungdki <hyungdki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:34:57 by hyungdki          #+#    #+#             */
/*   Updated: 2023/11/28 19:07:04 by hyungdki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal("Cat")
{
	std::cout << "[Cat class's default constructor called]\n";
	brain = new Brain();
}

Cat::Cat(const std::string& _type) : AAnimal(_type)
{
	std::cout << "[Cat class's user define constructor called]\n";
	brain = new Brain();
}

Cat::Cat(const Cat& origin)
{
	std::cout << "[Cat class's Copy constructor called]\n";
	*this = origin;
}

Cat& Cat::operator=(const Cat& origin)
{
	std::cout << "[Cat class's Copy assignment operator called]\n";
	if (this != &origin)
	{
		type = origin.type;
		delete brain;
		brain = new Brain(*(origin.brain));
	}	
	return *this;
}

Cat::~Cat()
{
	std::cout << "[Cat class's Destructor called]\n";
	delete brain;
}

void Cat::makeSound() const
{
	std::cout << "Meow~\n";
}

void Cat::getIdea(const std::string _idea)
{
	(*brain).memorize(_idea);
}

void Cat::showAllIdea()
{
	for (int i = 0; i < (*brain).getIdeaCnt() ;i++)
		std::cout << (*brain).getIdea(i) << '\n';
}
