/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:05:40 by hgicquel          #+#    #+#             */
/*   Updated: 2022/02/02 17:07:56 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <set>

class Span
{
	private:
		unsigned int		length;
		std::multiset<int>	numbers;
	public:
		Span(unsigned int n);
		~Span(void);
		Span(const Span& from);
		Span&	operator=(const Span& from);
		void	addNumber(int n);
		int		shortestSpan(void) const;
		int		longestSpan(void) const;

		template <typename T>
		void	addRange(T begin, T end);

		class FullSpanException: public std::exception
		{
			public:
				FullSpanException(void) throw();
				virtual const char*	what() const throw();
		};

		class InvalidSizeException: public std::exception
		{
			public:
				InvalidSizeException(void) throw();
				virtual const char*	what() const throw();
		};
};

template <typename T>
void	Span::addRange(T begin, T end)
{
	T	it;
	for (it = begin; it != end; it++)
		this->addNumber(*it);
}