/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 22:26:07 by ltouret           #+#    #+#             */
/*   Updated: 2021/08/02 14:25:11 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSANIMAL_HPP
# define CLASSANIMAL_HPP

class Animal
{
protected:
	std::string		type;
public:
	Animal(void);
	Animal(std::string type);
	Animal(Animal const &to_cpy);
	virtual ~Animal(void);
	virtual Animal			&operator=(Animal const &to_cpy);
	virtual void			makeSound(void) const = 0;
	std::string				getType(void) const;
};

#endif
