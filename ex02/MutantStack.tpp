/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:58:30 by hgicquel          #+#    #+#             */
/*   Updated: 2022/02/02 18:08:56 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "MutantStack.hpp"

template<typename T>
MutantStack<T>::MutantStack(void):
	std::stack<T>()
{}

template<typename T>
MutantStack<T>::~MutantStack(void)
{}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack& from):
	std::stack<T>(from)
{}

template<typename T>
MutantStack<T>&	MutantStack<T>::operator=(const MutantStack& from)
{
	this->std::stack<T>::operator=(from);
	return (*this);
}

template<typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin(void)
{
	return (this->c.begin());
}