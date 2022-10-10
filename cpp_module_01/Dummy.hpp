/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:08:00 by bterral           #+#    #+#             */
/*   Updated: 2022/10/10 10:54:21 by bterral          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Warlock.hpp"

class Dummy: public ATarget
{
	public:
		Dummy();
		virtual ~Dummy();
		
		virtual ATarget* clone() const;
};
