/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.hpp                                         :+:      :+:    :+:    */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 09:22:50 by bterral           #+#    #+#             */
/*   Updated: 2022/10/06 15:48:00 by bterral          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

class Dummy: public ATarget
{
	public:
		Dummy( void );
		Dummy( Dummy const& src);
		Dummy& operator=(Dummy const& rhs);
		virtual ~Dummy();
		
		virtual ATarget* clone( void ) const;
};

