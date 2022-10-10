/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 11:37:04 by bterral           #+#    #+#             */
/*   Updated: 2022/10/10 11:42:11 by bterral          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

int main() {

Warlock richard("Richard", "the Titled");

Dummy bob; Fwoosh* fwoosh = new Fwoosh();

richard.learnSpell(fwoosh);

richard.introduce(); richard.launchSpell("Fwoosh", bob);

richard.launchSpell("Fwoosh", bob);

delete fwoosh;

}
