/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 22:26:07 by ltouret           #+#    #+#             */
/*   Updated: 2021/08/16 23:03:58 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <set>
# include <algorithm> 

/*
class ElemNotFound: public std::exception
{
	public:
		virtual const char* what() const throw()
		{
			return "Element not found";
		}
};
*/

class Span
{
		private:
			unsigned int		_N;
			std::set<int>		_s;

		public:
			Span(void);
			Span(unsigned int N);
			Span(Span const &to_cpy);
			~Span(void);
			Span			&operator=(Span const &to_cpy);
			int				getSize(void);
			void			addNumber(int num);
			int				shortestSpan(void);
			int				longestSpan(void);
};

#endif
