/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 17:09:04 by ltouret           #+#    #+#             */
/*   Updated: 2021/06/05 19:59:25 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

class Zombie
{
	private:
		std::string	name;
		std::string	type;

	public:
		Zombie(void);
		Zombie(std::string name, std::string type);
		~Zombie(void);
		void		init(std::string name, std::string type);
		void		announce(void);
};

#endif
