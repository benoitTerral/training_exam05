/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.hpp                                         :+:      :+:    :+:    */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 09:22:50 by bterral           #+#    #+#             */
/*   Updated: 2022/10/06 16:41:22 by bterral          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

class BrickWall: public ATarget
{
	public:
		BrickWall( void );
		BrickWall( BrickWall const& src);
		BrickWall& operator=(BrickWall const& rhs);
		virtual ~BrickWall();
		
		virtual ATarget* clone( void ) const;
};

