/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 18:50:20 by ltouret           #+#    #+#             */
/*   Updated: 2021/08/27 20:51:07 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp" 

class HumanA
{
	private:
		std::string	name;
		Weapon		&weap;
	public:
		HumanA(std::string name, Weapon &weap);
		~HumanA(void);
		void		attack(void) const;
};

#endif
