/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 22:26:07 by ltouret           #+#    #+#             */
/*   Updated: 2021/07/24 13:23:38 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSDOG_HPP
# define CLASSDOG_HPP

# include "ClassAnimal.hpp"

class Dog : public Animal
{
public:
	Dog(void);
	Dog(Dog const &to_cpy);
	~Dog(void);
	Dog			&operator=(Dog const &to_cpy);
	void		makeSound(void) const;
};

#endif
