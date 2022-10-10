/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:22:58 by bterral           #+#    #+#             */
/*   Updated: 2022/10/06 17:16:50 by bterral          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

class ASpell;

class SpellBook
{
	public:
		SpellBook( void );
		~SpellBook( void );
		//getters
		//setter
		void learnSpell(ASpell* spell);
		void forgetSpell(std::string const & spell_str);
		ASpell* createSpell(std::string const & spell_str);
	private:
		SpellBook( const SpellBook &src) {(void)src;};
		SpellBook& operator=(const SpellBook &rhs) {(void)rhs; return (*this);};
		std::map<std::string, ASpell*> spells;
};

