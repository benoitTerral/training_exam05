/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 09:50:18 by bterral           #+#    #+#             */
/*   Updated: 2022/10/06 16:19:27 by bterral          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Fireball::Fireball( void ): ASpell("Fireball", "burnt to a crisp")
{
}

Fireball::~Fireball() {}

ASpell* Fireball::clone( void ) const
{
	return (new Fireball());
}
