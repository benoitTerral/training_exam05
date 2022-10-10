/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:08:00 by bterral           #+#    #+#             */
/*   Updated: 2022/10/10 10:51:46 by bterral          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Warlock.hpp"

class Fwoosh: public ASpell
{
	public:
		Fwoosh();
		virtual ~Fwoosh();
		
		virtual ASpell* clone() const;
};
