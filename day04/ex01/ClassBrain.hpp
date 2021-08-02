/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassBrain.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 22:26:07 by ltouret           #+#    #+#             */
/*   Updated: 2021/08/02 13:02:21 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSBRAIN_HPP
# define CLASSBRAIN_HPP

# include "ClassBrain.hpp"

class Brain
{
protected:
	std::string		ideas[100];
public:
	Brain(void);
	Brain(Brain const &to_cpy);
	~Brain(void);
	Brain			&operator=(Brain const &to_cpy);
	std::string		getIdea(int i) const;
	void			setIdea(int i, std::string idea);
};

#endif
