/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:27:47 by hgicquel          #+#    #+#             */
/*   Updated: 2022/02/02 17:05:06 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iterator>
#include <algorithm>

Span::Span(unsigned int n):
	length(n)
{}

Span::~Span(void)
{}

Span::Span(const Span& from):
	length(from.length),
	numbers(from.numbers)
{}

Span&	Span::operator=(const Span& from)
{
	this->length = from.length;
	this->numbers = from.numbers;
	return (*this);
}

void	Span::addNumber(int n)
{
	if (this->numbers.size() == this->length)
		throw FullSpanException();
	this->numbers.insert(n);
} 

int	Span::longestSpan(void) const
{
	if (this->numbers.size() < 2)
		throw InvalidSizeException();
	int max = *std::max_element(this->numbers.begin(), this->numbers.end());
	int min = *std::min_element(this->numbers.begin(), this->numbers.end());
	return (std::abs(max - min));
}

int	Span::shortestSpan(void) const
{
	if (this->numbers.size() < 2)
		throw InvalidSizeException();
	std::multiset<int>::iterator a = this->numbers.begin();
	std::multiset<int>::iterator b = this->numbers.begin();
	b++;
	int	min = std::abs(*(a++) - *(b++));
	while (b != this->numbers.end())
	{
		int	diff = std::abs(*(a++) - *(b++));
		if (diff < min) min = diff;
	}
	return (min);
}

Span::FullSpanException::FullSpanException(void) throw():
	std::exception()
{}

const char* Span::FullSpanException::what(void) const throw()
{
	return ("Span is full");
}

Span::InvalidSizeException::InvalidSizeException(void) throw():
	std::exception()
{}

const char*	Span::InvalidSizeException::what(void) const throw()
{
	return ("Invalid size");
}