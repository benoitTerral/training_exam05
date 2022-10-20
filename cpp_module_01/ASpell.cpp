/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:12:28 by bterral           #+#    #+#             */
/*   Updated: 2022/10/20 13:40:40 by bterral          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

ASpell::ASpell(std::string name, std::string effects): name(name), effects(effects)
{
}

ASpell::ASpell() {}

ASpell::ASpell(ASpell const& copy): name(copy.getName()), effects(copy.getEffects())
{
}

ASpell& ASpell::operator=(ASpell const& rhs)
{
	this->name = rhs.getName();
	this->effects = rhs.getEffects();
	return (*this);
}

ASpell::~ASpell()
{
}


std::string const& ASpell::getName() const
{
	return (this->name);
}

std::string const& ASpell::getEffects() const
{
	return (this->effects);
}

void	ASpell::launch(ATarget const& target) const
{
	target.getHitBySpell(*this);
}
