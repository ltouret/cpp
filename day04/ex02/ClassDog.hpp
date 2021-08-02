/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 22:26:07 by ltouret           #+#    #+#             */
/*   Updated: 2021/08/02 13:55:41 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSDOG_HPP
# define CLASSDOG_HPP

# include "ClassAnimal.hpp"
# include "ClassBrain.hpp"

class Dog : public Animal
{
private:
	Brain		*brain;
public:
	Dog(void);
	Dog(Dog const &to_cpy);
	~Dog(void);
	Dog			&operator=(Dog const &to_cpy);
	Brain		*getBrain(void) const;
	void		makeSound(void) const;
};

#endif
