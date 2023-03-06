/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bterral <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 11:37:04 by bterral           #+#    #+#             */
/*   Updated: 2023/03/06 16:25:25 by bterral          ###   ########.fr       */
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

Fwoosh* fwoosh2 = new Fwoosh();

richard.learnSpell(fwoosh2);

richard.launchSpell("Fwoosh", bob);

}

