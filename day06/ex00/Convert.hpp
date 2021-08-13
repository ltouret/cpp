/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 22:26:07 by ltouret           #+#    #+#             */
/*   Updated: 2021/08/13 19:47:25 by ltouret          ###   ########.fr       */
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

class Convert
{
private:
	std::string			_input;
	bool				checkChar(void) const;
	bool				checkInt(void) const;
	bool				checkFloat(void) const;
	bool				checkDouble(void) const;
public:
	Convert(void);
	Convert(std::string input);
	Convert(Convert const &to_cpy);
	~Convert(void);
	Convert				&operator=(Convert const &to_cpy);
	bool				checkType(void) const;
	void				convertChar(void) const;
	void				convertInt(void) const;
	void				convertFloat(void) const;
	void				convertDouble(void) const;
};

#endif
