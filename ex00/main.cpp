/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 15:35:36 by hgicquel          #+#    #+#             */
/*   Updated: 2022/02/02 15:46:19 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <iostream>

int	main(void)
{
	std::vector<int> v;
	v.push_back(651);
	v.push_back(124);
	v.push_back(461);
	v.push_back(876);
	v.push_back(541);

	std::vector<int>::iterator it;
	for (it = easyfind(v, 461); it != v.end(); it++)
		std::cout << *it << "\n";
	return (0);
}