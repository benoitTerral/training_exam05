/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:12:28 by bterral           #+#    #+#             */
/*   Updated: 2022/10/10 11:47:23 by bterral          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

ATarget::ATarget(std::string type): type(type)
{
}

ATarget::ATarget() {}

ATarget::ATarget(ATarget const& copy): type(copy.getType())
{
}

ATarget& ATarget::operator=(ATarget const& rhs)
{
	this->type = rhs.getType();
	return (*this);
}

ATarget::~ATarget()
{
}


std::string const& ATarget::getType() const
{
	return (this->type);
}

void	ATarget::getHitBySpell(ASpell const& spell) const
{
	std::cout << this->getType() << " has been " << spell.getEffects() << "!" << std::endl;
}

