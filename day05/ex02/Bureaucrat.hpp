/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 22:26:07 by ltouret           #+#    #+#             */
/*   Updated: 2021/08/04 14:19:23 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "Form.hpp"

class Bureaucrat
{
private:
	std::string const		_name;
	short					_grade;
public:
	Bureaucrat(std::string const &_name, short _grade);
	Bureaucrat(Bureaucrat const &to_cpy);
	~Bureaucrat(void);
	Bureaucrat				&operator=(Bureaucrat const &to_cpy);
	std::string const		&getName(void) const;
	short					getGrade(void) const;
	void					upgrade(void);
	void					downgrade(void);
	void					signForm(Form &f);

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char*		what() const throw(){
			return ("Grade too high");
		}
	};
	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char*		what() const throw(){
			return ("Grade too low");
		}
	};
};

std::ostream &operator<<(std::ostream &out, Bureaucrat &src);

#endif
