/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:32:26 by bterral           #+#    #+#             */
/*   Updated: 2023/03/06 16:46:33 by bterral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

TargetGenerator::TargetGenerator()
{
}

TargetGenerator::~TargetGenerator( void )
{
	for (std::map<std::string, ATarget*>::iterator it= this->targets.begin(); it != this->targets.end(); it++)
		delete it->second;
	this->targets.clear();
}

void	TargetGenerator::learnTargetType(ATarget* target)
{
	if (target)
		targets[target->getType()] = target->clone();
}

void	TargetGenerator::forgetTargetType(std::string const& target_str)
{
	std::map<std::string, ATarget*>::iterator it = this->targets.find(target_str);
	if (it != this->targets.end())
	{
		delete it->second;
		this->targets.erase(it->first);
	}
}

ATarget* TargetGenerator::createTarget(std::string const& target_str)
{
	ATarget *target = this->targets[target_str];
        return (target);
}
