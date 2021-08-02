/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 22:26:07 by ltouret           #+#    #+#             */
/*   Updated: 2021/08/02 13:54:58 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSCAT_HPP
# define CLASSCAT_HPP

# include "ClassAnimal.hpp"
# include "ClassBrain.hpp"

class Cat : public Animal
{
private:
	Brain		*brain;
public:
	Cat(void);
	Cat(Cat const &to_cpy);
	~Cat(void);
	Cat			&operator=(Cat const &to_cpy);
	Brain		*getBrain(void) const;
	void		makeSound(void) const;
};

#endif
