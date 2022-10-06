/* ************************************************************************** */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                         :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 09:22:50 by bterral           #+#    #+#             */
/*   Updated: 2022/10/06 09:51:58 by bterral          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

class ASpell;

class ATarget
{
	public:
		ATarget( void );
		ATarget( std::string type);
		ATarget( ATarget const& src);
		ATarget& operator=(ATarget const& rhs);
		virtual ~ATarget();
		//getters
		std::string const& getType( void ) const;
		//clone		
		virtual ATarget* clone( void ) const = 0;
		void	getHitBySpell(ASpell const& spell) const;
	private:
		std::string	type;
};

