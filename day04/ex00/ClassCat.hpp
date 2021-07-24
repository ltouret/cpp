/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 22:26:07 by ltouret           #+#    #+#             */
/*   Updated: 2021/07/24 13:23:38 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSCAT_HPP
# define CLASSCAT_HPP

# include "ClassAnimal.hpp"

class Cat : public Animal
{
public:
	Cat(void);
	Cat(Cat const &to_cpy);
	~Cat(void);
	Cat			&operator=(Cat const &to_cpy);
	void		makeSound(void) const;
};

#endif
