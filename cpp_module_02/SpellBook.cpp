/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:32:26 by bterral           #+#    #+#             */
/*   Updated: 2023/03/06 16:48:31 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

SpellBook::SpellBook()
{
}

SpellBook::~SpellBook( void )
{
	for (std::map<std::string, ASpell*>::iterator it= this->spells.begin(); it != this->spells.end(); it++)
		delete it->second;
	this->spells.clear();
}

void	SpellBook::learnSpell(ASpell* spell)
{
	if (spell)
		spells[spell->getName()] = spell->clone();
}

void	SpellBook::forgetSpell(std::string const& spell_str)
{
	std::map<std::string, ASpell*>::iterator it = this->spells.find(spell_str);
	if (it != this->spells.end())
	{
		delete it->second;
		this->spells.erase(it->first);
	}
}

ASpell*	SpellBook::createSpell(std::string const& spell_str)
{
	ASpell *spell = this->spells[spell_str];
        return (spell);
}
