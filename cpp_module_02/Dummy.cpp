/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 09:50:18 by bterral           #+#    #+#             */
/*   Updated: 2022/10/06 12:56:29 by bterral          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Dummy::Dummy( void ): ATarget("Target Practice Dummy")
{
}

Dummy::~Dummy() {}

ATarget* Dummy::clone( void ) const
{
	return (new Dummy());
}
