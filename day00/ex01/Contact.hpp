/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 19:36:54 by ltouret           #+#    #+#             */
/*   Updated: 2021/06/02 19:41:41 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

class contact
{
	private:

		std::string	fields[11];
		int			init;

	public:
		contact(void);
		bool	is_init(void);
		void	add(void);
		void	show_four(int index);
		void	show_all(void);
};

#endif
