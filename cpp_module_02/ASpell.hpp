/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 09:22:50 by bterral           #+#    #+#             */
/*   Updated: 2022/10/06 13:49:03 by bterral          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

class ATarget;

class ASpell
{
	public:
		ASpell( void );
		ASpell( std::string name, std::string effects);
		ASpell( ASpell const& src);
		ASpell& operator=(ASpell const& rhs);
		virtual ~ASpell();
		//getters
		std::string	const& getName( void ) const;
		std::string	const& getEffects( void ) const;
		//clone
		virtual ASpell* clone( void ) const = 0;
		void	launch(ATarget const& target);
	protected:
		std::string	name;
		std::string	effects;

};

