/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 22:26:07 by ltouret           #+#    #+#             */
/*   Updated: 2021/08/30 12:17:26 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <sstream>
# include <iostream>
# include <cmath>

class Fixed
{
private:
	int					value;
	static const int	frac_bits = 8;
public:
	Fixed(void);
	Fixed(const Fixed &fixed);
	Fixed(const int nb);
	Fixed(const float nb);
	~Fixed(void);
	Fixed				&operator=(const Fixed &fixed);
	int					toInt(void) const;
	float				toFloat(void) const;
	void				setRawBits(int const raw);
	int					getRawBits(void) const;

	bool operator<(const Fixed &a);
	bool operator>(const Fixed &a);
	bool operator>=(const Fixed &a);
	bool operator<=(const Fixed &a);
	bool operator!=(const Fixed &a);
	bool operator==(const Fixed &a);
	Fixed operator*(const Fixed &a);
	Fixed operator/(const Fixed &a);
	Fixed operator-(const Fixed &a);
	Fixed operator+(const Fixed &a);
	Fixed operator++(void);
	Fixed operator++(int n);
	Fixed operator--(void);
	Fixed operator--(int n);

	static Fixed &min(Fixed &a, Fixed &b);
	const static Fixed &min(const Fixed &a, const Fixed &b);
	static Fixed &max(Fixed &a, Fixed &b);
	const static Fixed &max(const Fixed &a, const Fixed &b);
};

std::ostream	&operator<<(std::ostream &out, Fixed const &fixed);

#endif
