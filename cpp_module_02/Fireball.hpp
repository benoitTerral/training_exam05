/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 09:22:50 by bterral           #+#    #+#             */
/*   Updated: 2022/10/06 16:18:02 by bterral          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

class Fireball: public ASpell
{
	public:
		Fireball( void );
		Fireball( Fireball const& src);
		Fireball& operator=(Fireball const& rhs);
		virtual ~Fireball();
		
		virtual ASpell* clone( void ) const;
};

