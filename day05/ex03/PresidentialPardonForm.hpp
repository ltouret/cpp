/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 22:26:07 by ltouret           #+#    #+#             */
/*   Updated: 2021/08/07 18:29:12 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	std::string const		_target;
public:
	PresidentialPardonForm(void);
	PresidentialPardonForm(std::string const &_target);
	PresidentialPardonForm(PresidentialPardonForm const &to_cpy);
	~PresidentialPardonForm(void);
	PresidentialPardonForm		&operator=(PresidentialPardonForm const &to_cpy);
	void				execute(Bureaucrat const &executor) const;
};

#endif
