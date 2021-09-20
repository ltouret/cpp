/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 18:50:20 by ltouret           #+#    #+#             */
/*   Updated: 2021/08/27 20:55:29 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp" 

class HumanB
{
	private:
		std::string	name;
		Weapon		*weap;
	public:
		HumanB(std::string name);
		~HumanB(void);
		void		setWeapon(Weapon &weap);
		void		attack(void) const;
};

#endif
