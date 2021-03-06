// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ValInc.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/31 20:20:45 by acarlson          #+#    #+#             //
//   Updated: 2019/02/01 13:57:48 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ValInc.hpp"

ValInc::ValInc( void ) { c = '+'; }
ValInc::ValInc( ValInc const & cp) { *this = cp; }
ValInc::~ValInc( void ) { }
ValInc& ValInc::operator=( ValInc const &) { return *this; }

void	ValInc::execute(unsigned char (&tape)[4096], std::vector<AInstruction *>&, unsigned long *, int *j)
{
	tape[*j] = tape[*j] + 1;
}

char		ValInc::getCh( void ) const
{
	return (c);
}
