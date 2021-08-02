/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassIce.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 22:26:07 by ltouret           #+#    #+#             */
/*   Updated: 2021/08/02 23:01:27 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSICE_HPP
# define CLASSICE_HPP

# include "ClassAMateria.hpp"
# include "ClassCharacter.hpp"

class Ice : public AMateria
{
protected:
	std::string		type;
public:
	Ice(void);
	Ice(Ice const &to_cpy);
	virtual ~Ice(void);
	virtual Ice			&operator=(Ice const &to_cpy);
	virtual Ice			*clone(void) const;
	virtual void		use(ICharacter& target);
};

#endif
