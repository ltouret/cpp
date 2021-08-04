/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 22:26:07 by ltouret           #+#    #+#             */
/*   Updated: 2021/08/04 14:09:18 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>

class Bureaucrat;

class Form
{
private:
	std::string const		_name;
	short const				_signGrade;
	short const				_execGrade;
	bool					_isSigned;
public:
	Form(std::string const &_name, short const _signGrade, short const _execGrade);
	Form(Form const &to_cpy);
	~Form(void);
	Form					&operator=(Form const &to_cpy);
	std::string const		&getName(void) const;
	short					getSignGrade(void) const;
	short					getExecGrade(void) const;
	bool					getSign(void) const;
	void					beSigned(Bureaucrat const &bureaucrat);

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

std::ostream &operator<<(std::ostream &out, Form &src);

#endif
