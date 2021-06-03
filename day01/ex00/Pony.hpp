/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 18:38:06 by ltouret           #+#    #+#             */
/*   Updated: 2021/06/03 19:18:49 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

class Pony
{
	private:
		std::string	name;
		std::string	color;

	public:
		Pony(void);
		~Pony(void);
		void		show(void);
		void		trot(void);
		void		set_name(std::string name);
		void		set_color(std::string color);
};

#endif
