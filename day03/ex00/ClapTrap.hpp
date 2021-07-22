/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 22:26:07 by ltouret           #+#    #+#             */
/*   Updated: 2021/07/22 11:51:20 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

class ClapTrap
{
private:
	std::string			Name;
	unsigned int		Hit_points;
	unsigned int		Energy_points;
	unsigned int		Attack_damage;
public:
	ClapTrap(void);
	ClapTrap(std::string Name);
	ClapTrap(ClapTrap const& to_cpy);
	~ClapTrap(void);
	ClapTrap&	operator=(ClapTrap const &to_cpy);
	void		attack(std::string const & target) const;
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
};

#endif
