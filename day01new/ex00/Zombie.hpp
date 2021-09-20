/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 17:09:04 by ltouret           #+#    #+#             */
/*   Updated: 2021/08/27 19:12:35 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

class Zombie
{
	private:
		std::string	name;

	public:
		Zombie(std::string name);
		~Zombie(void);
		void		announce(void);
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
