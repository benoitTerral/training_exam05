/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:32:26 by bterral           #+#    #+#             */
/*   Updated: 2022/10/06 17:21:04 by bterral          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "SpellBook.hpp"

SpellBook::SpellBook()
{
}

SpellBook::~SpellBook( void )
{
}

void	SpellBook::learnSpell(ASpell*)
{
	if (spell)
		this->spellBook.insert(std::pair<std::string, ASpell*>(spell->getName(), spell->clone()));
}

void	SpellBook::forgetSpell(string const &)
{
	std::map<std::string, ASpell*>::iterator it = this->spellBook.find(spell_str);
	if (it != this->spellBook.end())
	{
		delete it->second;
		this->spellBook.erase(it->first);
	}
}

ASpell* createSpell(string const &)
{
}
