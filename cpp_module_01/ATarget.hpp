/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:08:00 by bterral           #+#    #+#             */
/*   Updated: 2022/10/10 10:47:23 by bterral          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Warlock.hpp"

class ASpell;

class ATarget
{
	public:
		ATarget(std::string type);
		virtual ~ATarget();
		ATarget();
		ATarget(ATarget const& copy);
		ATarget& operator=(ATarget const& rhs);
		//getters
		std::string const& getType() const;

		virtual ATarget* clone() const = 0;

		void	getHitBySpell(ASpell const& spell) const;
	private:
		std::string	type;
}
;
