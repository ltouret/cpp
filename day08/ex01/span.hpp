/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 22:26:07 by ltouret           #+#    #+#             */
/*   Updated: 2021/09/20 21:18:46 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <algorithm> 
# include <iterator>
# include <iostream>
# include <vector>


class tooManyNumbers: public std::exception
{
public:
	virtual const char* what() const throw()
	{
		return "Cant save more numbers";
	}
};

class noSpanFound: public std::exception
{
public:
	virtual const char* what() const throw()
	{
		return "Span cant be found";
	}
};

class Span
{
		private:
			unsigned int			_N;
			std::vector<int>		_V;

		public:
			Span(void);
			Span(unsigned int N);
			Span(Span const &to_cpy);
			~Span(void);
			Span			&operator=(Span const &to_cpy);
			void			addNumber(int num);
			int				shortestSpan(void);
			int				longestSpan(void);
			void			rangeV(std::vector<int>::iterator begin, std::vector<int>::iterator end);
			void			show(void);
};

#endif
