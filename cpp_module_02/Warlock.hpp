/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:22:58 by bterral           #+#    #+#             */
/*   Updated: 2022/10/06 15:35:44 by bterral          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include <string>
# include <map>
# include "ASpell.hpp"
# include "ATarget.hpp"
# include "Dummy.hpp"
# include "Fwoosh.hpp"
# include "SpellBook.hpp"
# include "TargetGenerator.hpp"
# include "Fireball.hpp"
# include "Polymorph.hpp"
# include "BrickWall.hpp"

class Warlock
{
	public:
		Warlock( std::string name, std::string title);
		~Warlock( void );
		void	introduce( void ) const;
		//getters
		std::string	const & getName( void ) const;
		std::string	const & getTitle( void ) const;
		//setter
		void			setTitle(std::string const & title);
		void			learnSpell(ASpell *spell);
		void			forgetSpell(std::string const& spell_str);
		void			launchSpell(std::string const &spell_str, ATarget const& target);
		ASpell* 		createSpell(std::string const & spell_str);
	private:
		std::string	name;
		std::string	title;
		Warlock( void ) {};
		Warlock( const Warlock &src) {(void)src;};
		Warlock& operator=(const Warlock &rhs) {(void)rhs; return (*this);};
		SpellBook	book;		
};

