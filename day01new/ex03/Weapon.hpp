/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 17:09:04 by ltouret           #+#    #+#             */
/*   Updated: 2021/08/27 20:52:19 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
	private:
		std::string				type;
	public:
		Weapon(std::string type);
		~Weapon(void);
		const std::string		&getType(void) const;
		void					setType(std::string type);
};

#endif
