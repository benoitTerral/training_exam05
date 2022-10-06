/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 09:22:50 by bterral           #+#    #+#             */
/*   Updated: 2022/10/06 13:14:48 by bterral          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

class Fwoosh: public ASpell
{
	public:
		Fwoosh( void );
		Fwoosh( Fwoosh const& src);
		Fwoosh& operator=(Fwoosh const& rhs);
		virtual ~Fwoosh();
		
		virtual ASpell* clone( void ) const;
};

