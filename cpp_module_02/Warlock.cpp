/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:32:26 by bterral           #+#    #+#             */
/*   Updated: 2022/10/06 15:47:36 by bterral          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title): name(name), title(title)
{
	std::cout << this->name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock( void )
{
	std::cout << this->name << ": My job here is done!" << std::endl;
}

//getters
std::string	const & Warlock::getName( void ) const
{
	return (this->name);
}

std::string	const & Warlock::getTitle( void ) const
{
	return (this->title);
}

//setter
void			Warlock::setTitle(std::string const & title)
{
	this->title = title;
}

void			Warlock::introduce( void ) const
{
	std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl;
}

void 			Warlock::learnSpell(ASpell* spell)
{
	book.learnSpell(spell);
}

void 			Warlock::forgetSpell(std::string const& spell_str)
{
	book.forgetSpell(spell_str);
}

void			Warlock::launchSpell(std::string const &spell_str, ATarget const& target)
{
	ATarget *tmp = 0;
	if (tmp == &target)
		return;
	ASpell *spell = book.createSpell(spell_str);
	if (spell)
		spell->launch(target);
}
