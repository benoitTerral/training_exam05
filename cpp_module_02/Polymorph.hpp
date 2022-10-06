/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 09:22:50 by bterral           #+#    #+#             */
/*   Updated: 2022/10/06 16:18:50 by bterral          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

class Polymorph: public ASpell
{
	public:
		Polymorph( void );
		Polymorph( Polymorph const& src);
		Polymorph& operator=(Polymorph const& rhs);
		virtual ~Polymorph();
		
		virtual ASpell* clone( void ) const;
};

