/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassCure.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 22:26:07 by ltouret           #+#    #+#             */
/*   Updated: 2021/08/02 23:00:53 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSCURE_HPP
# define CLASSCURE_HPP

# include "ClassAMateria.hpp"
# include "ClassCharacter.hpp"

class Cure : public AMateria
{
protected:
	std::string		type;
public:
	Cure(void);
	Cure(Cure const &to_cpy);
	virtual ~Cure(void);
	virtual Cure			&operator=(Cure const &to_cpy);
	virtual Cure			*clone(void) const;
	virtual void			use(ICharacter& target);
};

#endif
