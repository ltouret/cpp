/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassWrongAnimal.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 22:26:07 by ltouret           #+#    #+#             */
/*   Updated: 2021/07/24 13:11:38 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSWRONGANIMAL_HPP
# define CLASSWRONGANIMAL_HPP

class WrongAnimal
{
protected:
	std::string		type;
public:
	WrongAnimal(void);
	WrongAnimal(std::string type);
	WrongAnimal(WrongAnimal const &to_cpy);
	~WrongAnimal(void);
	WrongAnimal			&operator=(WrongAnimal const &to_cpy);
	void				makeSound(void) const;
	std::string			getType(void) const;
};

#endif
