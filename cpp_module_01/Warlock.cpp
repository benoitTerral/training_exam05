/************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:12:28 by bterral           #+#    #+#             */
/*   Updated: 2023/03/06 16:31:46 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title): name(name), title(title)
{
	std::cout << this->name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
	this->book.clear();
	std::cout << this->name << ": My job here is done!" << std::endl;
}

void Warlock::introduce() const
{
	std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl;
}

std::string const& Warlock::getName() const
{
	return (this->name);
}

std::string const& Warlock::getTitle() const
{
	return (this->title);
}

void	Warlock::setTitle(std::string const& title)
{
	this->title = title;
}

void	Warlock::learnSpell(ASpell *spell)
{
	if (spell)
		this->book[spell->getName()] =  spell;
}

void	Warlock::forgetSpell(std::string const& spell_str)
{
	std::map<std::string, ASpell*>::iterator it = this->book.find(spell_str);
	if (it != this->book.end())
	{
		delete it->second;
		this->book.erase(it->first);
	}
}

void	Warlock::launchSpell(std::string const& spell_str, ATarget const& target)
{
	ASpell *spell = this->book[spell_str];
	if (spell)
		spell->launch(target);
}
