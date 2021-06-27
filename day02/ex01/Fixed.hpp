/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 22:26:07 by ltouret           #+#    #+#             */
/*   Updated: 2021/06/27 18:46:17 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <sstream>

class Fixed
{
private:
	int	value;
	static const int	frac_bits = 8;
public:
	Fixed(void);
	~Fixed(void);
	Fixed(const Fixed &fixed);
	Fixed(const int nb);
	Fixed(const float nb);
	Fixed	&operator=(const Fixed &fixed);
	int		toInt(void) const;
	float	toFloat(void) const;
	void	setRawBits(int const raw);
	int		getRawBits(void) const;
};

std::ostream	&operator<<(std::ostream &out, Fixed const &fixed);

#endif
