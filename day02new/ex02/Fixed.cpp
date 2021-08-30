/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 22:28:39 by ltouret           #+#    #+#             */
/*   Updated: 2021/08/30 12:36:17 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::Fixed(const int nb)
{
	std::cout << "Int Constructor called" << std::endl;
	this->value = nb << this->frac_bits;
}

Fixed::Fixed(const float nb)
{
	std::cout << "Float Constructor called" << std::endl;
	this->value = roundf(nb * (1 << this->frac_bits));
}

Fixed			&Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	this->value = fixed.value;
	return (*this);
}

std::ostream	&operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}

int				Fixed::toInt(void) const
{
	return (this->value >> this->frac_bits);
}

float			Fixed::toFloat(void) const
{
	return ((float)this->value / (float)(1 << this->frac_bits));
}

void			Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}

int				Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

bool			Fixed::operator==(const Fixed &a)
{
	return (this->value == a.value);
}

bool			Fixed::operator>(const Fixed &a)
{
	return (this->value > a.value);
}

bool			Fixed::operator<(const Fixed &a)
{
	return (this->value < a.value);
}

bool			Fixed::operator<=(const Fixed &a)
{
	return (this->value <= a.value);
}

bool			Fixed::operator>=(const Fixed &a)
{
	return (this->value >= a.value);
}

bool			Fixed::operator!=(const Fixed &a)
{
	return (this->value != a.value);
}

Fixed			Fixed::operator+(const Fixed &a)
{
	return (this->value + a.value);
}

Fixed			Fixed::operator-(const Fixed &a)
{
	return (this->value - a.value);
}

Fixed			Fixed::operator*(const Fixed &a)
{
	this->value = this->toFloat() * a.value;
	return(*this);
}

Fixed			Fixed::operator/(const Fixed &a)
{
	this->value = this->toFloat() / a.value;
	return(*this);
}

Fixed			Fixed::operator--()
{
	this->value--;
	return(*this);
}

Fixed			Fixed::operator++()
{
	this->value++;
	return(*this);
}

Fixed			Fixed::operator++(int)
{
	Fixed res;
	res = *this;
	this->value++;
	return(res);
}

Fixed			Fixed::operator--(int)
{
	Fixed res;
	res = *this;
	this->value--;
	return (res);
}

const Fixed		&Fixed::min(const Fixed &a,const Fixed &b)
{
	if ((Fixed)a >= b)
		return(b);
	else
		return(a);
}

Fixed			&Fixed::min(Fixed &a,Fixed &b)
{
	if (a >= b)
		return(b);
	else
		return(a);
}

const Fixed		&Fixed::max(const Fixed &a,const Fixed &b)
{
	if ((Fixed)a <= b)
		return(b);
	else
		return(a);
}

Fixed			&Fixed::max(Fixed &a,Fixed &b)
{
	if (a <= b)
		return(b);
	else
		return(a);
}
