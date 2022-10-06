/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:22:58 by bterral           #+#    #+#             */
/*   Updated: 2022/10/06 16:46:56 by bterral          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

class SpellBook
{
	public:
		SpellBook( void );
		~SpellBook( void );
		//getters
		//setter
		void learnSpell(ASpell*);
		void forgetSpell(string const &);
		ASpell* createSpell(string const &);
	private:
		SpellBook( const SpellBook &src) {(void)src;};
		SpellBook& operator=(const SpellBook &rhs) {(void)rhs; return (*this);};
		std::map<std::string, ASpell*> spellBook;
};

#endif
