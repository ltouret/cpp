/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 22:26:07 by ltouret           #+#    #+#             */
/*   Updated: 2021/08/28 19:40:43 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	private:
		int					value;
		static const int	frac_bits = 8;

	public:
		Fixed(void);
		Fixed(const Fixed &fixed);
		~Fixed(void);
		Fixed	&operator=(const Fixed &fixed);
		void	setRawBits(int const raw);
		int		getRawBits(void) const;
};

#endif
