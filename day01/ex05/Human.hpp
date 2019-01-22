// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Human.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/22 14:42:16 by acarlson          #+#    #+#             //
//   Updated: 2019/01/22 15:25:10 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include <iostream>
# include <string>
# include <sstream>
# include "Brain.hpp"

class Human {

public:
	std::string	name;

	Human( void );
	Human( std::string name );
	~Human( void );
	std::string		identify( void ) const;
	Brain			getBrain( void ) const;

	Brain	_brain;
private:

};

#endif
