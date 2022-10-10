/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:12:28 by bterral           #+#    #+#             */
/*   Updated: 2022/10/10 10:56:09 by bterral          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Fwoosh::Fwoosh(): ASpell("Fwoosh", "fwooshed")
{
}

Fwoosh::~Fwoosh()
{
}

ASpell* Fwoosh::clone() const
{
	return (new Fwoosh());
}
