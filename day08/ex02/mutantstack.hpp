/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 22:26:07 by ltouret           #+#    #+#             */
/*   Updated: 2021/08/18 13:35:39 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <deque>
# include <stack>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
		public:
			MutantStack(void): std::stack<T, Container>() {};
			MutantStack(MutantStack const &to_cpy): std::stack<T, Container>(to_cpy) {};
			~MutantStack(void) {};
			MutantStack			&operator=(MutantStack const &to_cpy) {return (*this = std::stack<T, Container>::operator=(to_cpy));};
			typedef typename	Container::iterator iterator;
			typedef typename	Container::const_iterator const_iterator;

			iterator			begin(void) {return (this->c.begin());}
			iterator			end(void) {return (this->c.end());}
			const_iterator		begin(void) const {return (this->c.begin());}
			const_iterator		end(void) const {return (this->c.end());}
			iterator			rbegin(void) {return (this->c.rbegin());}
			iterator			rend(void) {return (this->c.rend());}
			const_iterator		rbegin(void) const {return (this->c.rbegin());}
			const_iterator		rend(void) const {return (this->c.rend());}
};

#endif
