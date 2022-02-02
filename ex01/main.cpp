/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:59:55 by hgicquel          #+#    #+#             */
/*   Updated: 2022/02/02 17:10:28 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <vector>

int	main(void)
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

	std::vector<int> v;
	v.push_back(6);
	v.push_back(3);
	v.push_back(17);
	v.push_back(9);
	v.push_back(11);

	Span sp2 = Span(5);
	sp2.addRange(v.begin(), v.end());

	std::cout << sp2.shortestSpan() << "\n";
	std::cout << sp2.longestSpan() << "\n";

	return 0;
}