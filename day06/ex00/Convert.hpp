/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 22:26:07 by ltouret           #+#    #+#             */
/*   Updated: 2021/08/11 13:14:21 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP 
# define CONVERT_HPP

# include <iostream>
# include <stdlib.h>
# include <ctype.h>


class Convert
{
private:
	std::string				_input;
public:
	Convert(void);
	Convert(std::string input);
	Convert(Convert const &to_cpy);
	~Convert(void);
	Convert				&operator=(Convert const &to_cpy);
	bool				checkChar(void);
	bool				checkInt(void);
	bool				checkFloat(void);
	bool				checkDouble(void);
	bool				checkType(void);
};

#endif
