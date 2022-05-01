/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:21:00 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/24 16:27:24 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename Type>
MutantStack<Type>::MutantStack() : MutantStack<Type>::stack()
{}

template <typename Type>
MutantStack<Type>::MutantStack( MutantStack const & other ) : MutantStack<Type>::stack(other)
{}

template <typename Type>
MutantStack<Type>::~MutantStack()
{}

template <typename Type>
MutantStack<Type> & MutantStack<Type>::operator = ( MutantStack<Type> const & other )
{
    if (this != &other)
        MutantStack<Type>::stack::operator=(other) ;
    return (*this) ;
}

template <typename Type>
typename MutantStack<Type>::iterator MutantStack<Type>::begin()
{
	return this->c.begin();
}

template <typename Type>
typename MutantStack<Type>::iterator MutantStack<Type>::end()
{
	return this->c.end();
}

template <typename Type>
typename MutantStack<Type>::const_iterator MutantStack<Type>::cbegin() const
{
	return this->c.cbegin();
}

template <typename Type>
typename MutantStack<Type>::const_iterator MutantStack<Type>::cend() const
{
	return this->c.cend();
}

template <typename Type>
typename MutantStack<Type>::reverse_iterator MutantStack<Type>::rbegin()
{
	return this->c.rbegin();
}

template <typename Type>
typename MutantStack<Type>::reverse_iterator MutantStack<Type>::rend()
{
	return this->c.rend();
}

template <typename Type>
typename MutantStack<Type>::const_reverse_iterator MutantStack<Type>::crbegin() const
{
	return this->c.crbegin();
}
template <typename Type>
typename MutantStack<Type>::const_reverse_iterator MutantStack<Type>::crend() const
{
	return this->c.crend();
}
