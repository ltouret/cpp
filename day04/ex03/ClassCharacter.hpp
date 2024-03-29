/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassCharacter.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 22:26:07 by ltouret           #+#    #+#             */
/*   Updated: 2021/08/03 18:18:56 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSCHARACTER_HPP
# define CLASSCHARACTER_HPP

# include "ClassAMateria.hpp"
# include "ClassICharacter.hpp"

class Character : public ICharacter
{
private:
	AMateria					*inventory[4];
	std::string					name;
public:
	Character(void);
	Character(std::string const &name);
	Character(Character const &to_cpy);
	virtual ~Character(void);
	virtual Character			&operator=(Character const &to_cpy);
	virtual std::string const	&getName(void) const;
	virtual void				equip(AMateria *m);
	virtual void				unequip(int idx);
	virtual void				use(int idx, ICharacter &target);
};

#endif
