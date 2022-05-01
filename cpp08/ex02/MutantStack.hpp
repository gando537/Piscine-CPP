/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 13:57:24 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/24 16:28:37 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _MUTANTSTACK_HPP_
#define _MUTANTSTACK_HPP_

#include <iostream>
#include <stack>

template <typename Type> 
class MutantStack : public std::stack<Type>
{
    public :
        MutantStack () ;
        MutantStack ( MutantStack const & other ) ;
        ~MutantStack () ;

        MutantStack<Type> & operator = ( MutantStack<Type> const & other ) ;

        typedef typename MutantStack<Type>::stack::container_type::iterator iterator ;
        iterator begin () ;
        iterator end () ;

        typedef typename MutantStack<Type>::stack::container_type::const_iterator const_iterator ;
        const_iterator cbegin () const ;
        const_iterator cend () const ;

        typedef typename MutantStack<Type>::stack::container_type::reverse_iterator reverse_iterator ;
        reverse_iterator rbegin () ;
        reverse_iterator rend () ;

        typedef typename MutantStack<Type>::stack::container_type::const_reverse_iterator const_reverse_iterator ;
        const_reverse_iterator crbegin () const ;
        const_reverse_iterator crend () const ;
};

#endif
