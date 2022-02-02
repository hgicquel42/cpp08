/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:59:55 by hgicquel          #+#    #+#             */
/*   Updated: 2022/02/02 17:15:24 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <vector>
#include <cstdlib>

int	main(void)
{
	srand(time(NULL));

	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		try {
			sp.addNumber(5);
		} catch(std::exception& e)
		{
			std::cout << "OK: " << e.what() << "\n";
		}

		std::cout << sp.shortestSpan() << "\n";
		std::cout << sp.longestSpan() << "\n";
	}

	{
		std::vector<int> v;
		v.push_back(6);
		v.push_back(3);
		v.push_back(17);
		v.push_back(9);
		v.push_back(11);

		Span sp = Span(5);
		sp.addRange(v.begin(), v.end());

		std::cout << sp.shortestSpan() << "\n";
		std::cout << sp.longestSpan() << "\n";
	}

	{
		Span sp = Span(10000);
		for (int i = 0; i < 10000; i++)
			sp.addNumber(rand());

		std::cout << sp.shortestSpan() << "\n";
		std::cout << sp.longestSpan() << "\n";
	}

	return 0;
}