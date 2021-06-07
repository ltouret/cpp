/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 18:50:20 by ltouret           #+#    #+#             */
/*   Updated: 2021/06/07 19:14:17 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp" 

class HumanA
{
	private:
		std::string	name;
		Weapon		*weap;
	public:
		HumanA(std::string name, Weapon &weap);
		void		attack(void) const;
};

#endif
