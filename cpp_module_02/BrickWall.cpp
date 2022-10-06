/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 09:50:18 by bterral           #+#    #+#             */
/*   Updated: 2022/10/06 16:41:40 by bterral          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

BrickWall::BrickWall( void ): ATarget("Target Practice BrickWall")
{
}

BrickWall::~BrickWall() {}

ATarget* BrickWall::clone( void ) const
{
	return (new BrickWall());
}
