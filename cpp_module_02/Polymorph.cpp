/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 09:50:18 by bterral           #+#    #+#             */
/*   Updated: 2022/10/06 16:20:33 by bterral          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Polymorph::Polymorph( void ): ASpell("Polymorph", "turned into a critter")
{
}

Polymorph::~Polymorph() {}

ASpell* Polymorph::clone( void ) const
{
	return (new Polymorph());
}
