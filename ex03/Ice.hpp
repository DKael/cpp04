/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungdki <hyungdki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 20:57:28 by hyungdki          #+#    #+#             */
/*   Updated: 2023/11/28 22:39:31 by hyungdki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
private:
	void _copy(const Ice& origin);
	
protected:

public:
	Ice();
	Ice(const Ice& origin);
	Ice& operator=(const AMateria& origin);
	Ice& operator=(const Ice& origin);
	virtual ~Ice();
	virtual Ice* clone() const;
	virtual void use(ICharacter& target);

};

#endif