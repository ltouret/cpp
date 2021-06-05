/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 17:09:04 by ltouret           #+#    #+#             */
/*   Updated: 2021/06/05 20:05:33 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

class ZombieHorde
{
	private:
		int		size;
		Zombie	*horde;

	public:
		ZombieHorde(int n);
		~ZombieHorde(void);
		void		announce(void);
};

#endif
