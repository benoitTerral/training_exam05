/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:22:58 by bterral           #+#    #+#             */
/*   Updated: 2022/10/06 17:16:50 by bterral          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

class ATarget;

class TargetGenerator
{
	public:
		TargetGenerator( void );
		~TargetGenerator( void );
		//getters
		//setter
		void		learnTargetType(ATarget* target);
		void		forgetTargetType(std::string const & target_str);
		ATarget*	createTarget(std::string const & target_str);
	private:
		TargetGenerator( const TargetGenerator &src) {(void)src;};
		TargetGenerator& operator=(const TargetGenerator &rhs) {(void)rhs; return (*this);};
		std::map<std::string, ATarget*> targets;
};

