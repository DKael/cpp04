/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungdki <hyungdki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:35:57 by hyungdki          #+#    #+#             */
/*   Updated: 2023/11/28 15:34:41 by hyungdki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class Dog : public Animal
{
private:

protected:

public:
	Dog();
	Dog(const std::string& _type);
	Dog(const Dog& origin);
	Dog& operator=(const Dog& origin);
	virtual ~Dog();
	virtual void makeSound() const;
	
};

#endif