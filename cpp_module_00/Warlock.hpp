/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:22:58 by bterral           #+#    #+#             */
/*   Updated: 2022/10/05 16:49:33 by bterral          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>


class Warlock
{
	public:
		Warlock( std::string name, std::string title);
		~Warlock( void );
		void	introduce( void ) const;
		//getters
		std::string	const & getName( void ) const;
		std::string	const & getTitle( void ) const;
		//setter
		void			setTitle(std::string const & ititle);
	private:
		std::string	name;
		std::string	title;
		Warlock( void );
		Warlock( const Warlock &src);
		Warlock& operator=(const Warlock &rhs);
};
