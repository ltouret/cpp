/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 22:26:07 by ltouret           #+#    #+#             */
/*   Updated: 2021/08/12 18:00:01 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP 
# define CONVERT_HPP

# include <iostream>
# include <stdlib.h>
# include <ctype.h>
# include <cerrno>
# include <cmath>
# include <limits>
# include <iomanip>
# include <cfloat>

// add const to most of funcs
// the print of char: int: get it out of convert func
// add convertType that wraps all the convert and get them in private + receive print int:

class Convert
{
private:
	std::string			_input;
	bool				checkChar(void);
	bool				checkInt(void);
	bool				checkFloat(void);
	bool				checkDouble(void);
public:
	Convert(void);
	Convert(std::string input);
	Convert(Convert const &to_cpy);
	~Convert(void);
	Convert				&operator=(Convert const &to_cpy);
	bool				checkType(void);
	void				convertChar(void);
	void				convertInt(void);
	void				convertFloat(void);
	void				convertDouble(void);
};

#endif
