/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 18:50:20 by ltouret           #+#    #+#             */
/*   Updated: 2021/08/28 14:16:25 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>

class Karen
{
	private:
		void		unknown(void);
		void		debug(void);
		void		info(void);
		void		warning(void);
		void		error(void);
	public:
		Karen(void);
		~Karen(void);
		void		complain(std::string level);
};

#endif
