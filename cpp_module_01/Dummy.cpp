/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:12:28 by bterral           #+#    #+#             */
/*   Updated: 2022/10/10 10:56:00 by bterral          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Dummy::Dummy(): ATarget("Target Practice Dummy")
{
}

Dummy::~Dummy()
{
}

ATarget* Dummy::clone() const
{
	return (new Dummy());
}
