/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:22:58 by bterral           #+#    #+#             */
/*   Updated: 2022/10/06 16:47:02 by bterral          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include <map>
# include "ASpell.hpp"
# include "ATarget.hpp"
# include "Dummy.hpp"
# include "Fwoosh.hpp"

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
		void			forgetSpell(std::string spell_str);
		void			launchSpell(std::string spell_str, ATarget const& target);

	private:
		std::string	name;
		std::string	title;
		Warlock( void );
		Warlock( const Warlock &src);
		Warlock& operator=(const Warlock &rhs);
		std::map<std::string, ASpell*> spellBook;
};

