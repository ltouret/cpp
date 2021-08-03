/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassMateriaSource.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 22:26:07 by ltouret           #+#    #+#             */
/*   Updated: 2021/08/03 18:19:51 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSMATERIASOURCE_HPP
# define CLASSMATERIASOURCE_HPP

# include "ClassIMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria					*materias[4];
public:
	MateriaSource(void);
	MateriaSource(MateriaSource const &to_cpy);
	virtual ~MateriaSource(void);
	virtual MateriaSource		&operator=(MateriaSource const &to_cpy);
	AMateria					*createMateria(std::string const &type);
	void						learnMateria(AMateria *materia);
};

#endif
