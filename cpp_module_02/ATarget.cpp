/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 09:50:18 by bterral           #+#    #+#             */
/*   Updated: 2022/10/06 16:09:38 by bterral          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

ATarget::ATarget( void ) {};

ATarget::ATarget(std::string type):  type(type) {}

ATarget::~ATarget() {}

ATarget::ATarget( ATarget const& src): type(src.getType()) {}

ATarget& ATarget::operator=(ATarget const& rhs)
{
	this->type = rhs.getType();
	return (*this);
}

void	ATarget::getHitBySpell(ASpell const& spell) const
{
	std::cout << this->type << "has been " << spell.getEffects() << "!" << std::endl;
}

std::string const& ATarget::getType( void ) const
{
	return (this->type);
}

