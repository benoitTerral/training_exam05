/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 09:50:18 by bterral           #+#    #+#             */
/*   Updated: 2022/10/06 13:47:35 by bterral          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

ASpell::ASpell( void ) {}

ASpell::~ASpell() {}

ASpell::ASpell(std::string name, std::string effects): name(name), effects(effects) {}

ASpell::ASpell( ASpell const& src): name(src.getName()), effects(src.getEffects()) {}

ASpell&	ASpell::operator=(ASpell const& rhs)
{
	this->name = rhs.getName();
	this->effects = rhs.getEffects();
	return (*this);
}

std::string const&	ASpell::getName( void ) const
{
	return (this->name);
}

std::string const& ASpell::getEffects( void ) const
{
	return (this->effects);
}

void	ASpell::launch(ATarget const& target)
{
	target.getHitBySpell(*this);
}
