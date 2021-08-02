/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassAMateria.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 22:26:07 by ltouret           #+#    #+#             */
/*   Updated: 2021/08/02 22:58:12 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSAMATERIA_HPP
# define CLASSAMATERIA_HPP

// is this needed?
//# include "ClassICharacter.hpp"

class ICharacter;

class AMateria
{
protected:
	std::string		type;
public:
	AMateria(void);
	AMateria(std::string const &type);
	AMateria(AMateria const &to_cpy);
	virtual ~AMateria(void);
	virtual AMateria			&operator=(AMateria const &to_cpy);
	virtual AMateria			*clone(void) const = 0;
	virtual void				use(ICharacter& target);
	std::string const			&getType(void) const;
};

#endif
