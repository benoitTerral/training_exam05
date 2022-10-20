/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:08:00 by bterral           #+#    #+#             */
/*   Updated: 2022/10/20 13:40:31 by bterral          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Warlock.hpp"

class ATarget;

class ASpell
{
	public:
		ASpell(std::string name, std::string effects);
		virtual ~ASpell();
		ASpell();
		ASpell(ASpell const& copy);
		ASpell& operator=(ASpell const& rhs);
		//getters
		std::string const& getName() const;
		std::string const& getEffects() const;

		virtual ASpell* clone() const = 0;

		void	launch(ATarget const& target) const;
	private:
		std::string	name;
		std::string	effects;
}
;
