// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Array.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/30 14:45:17 by acarlson          #+#    #+#             //
//   Updated: 2019/01/30 15:05:07 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>

class Array {

public:
	Array( unsigned int );
	Array( void );
	Array( Array const & cp);
	~Array( void );
	Array& operator=( Array const &);

private:

};

#endif
