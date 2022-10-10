/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:08:00 by bterral           #+#    #+#             */
/*   Updated: 2022/10/10 13:42:35 by bterral          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "Fwoosh.hpp"
#include "Dummy.hpp"

class Warlock
{
	public:
		Warlock(std::string name, std::string title);
		~Warlock();
		//getters
		std::string const& getName() const;
		std::string const& getTitle() const;

		void	setTitle(std::string const& title);

		void introduce() const;
		void	learnSpell(ASpell *spell);
		void	forgetSpell(std::string const& spell_str);
		void	launchSpell(std::string const& spell_str, ATarget const& target);
	private:
		Warlock();
		Warlock(Warlock const& copy);
		Warlock operator=(Warlock const& rhs);
		std::string	name;
		std::string	title;
		std::map<std::string, ASpell*> book;
}
;
