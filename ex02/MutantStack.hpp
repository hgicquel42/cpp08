/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:35:39 by hgicquel          #+#    #+#             */
/*   Updated: 2022/02/02 18:02:23 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <stack>

template<typename T>
class MutantStack: public std::stack<T>
{
	public:
		MutantStack(void);
		~MutantStack(void);
		MutantStack(const MutantStack& from);
		MutantStack&	operator=(const MutantStack& from);

		typedef typename std::stack<T>::container_type::iterator				iterator;
		typedef typename std::stack<T>::container_type::const_iterator			const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator		reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator	const_reverse_iterator;

		iterator				begin(void);
		const_iterator			begin(void) const;

		reverse_iterator		rbegin(void);
		const_reverse_iterator	rbegin(void) const;

		iterator				end(void);
		const_iterator			end(void) const;

		reverse_iterator		rend(void);
		const_reverse_iterator	rend(void) const;
};

#include "MutantStack.tpp"