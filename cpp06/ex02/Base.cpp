/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 13:35:10 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/19 16:05:14 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base & Base::operator = ( Base const & other )
{
    if (this != &other)
    {}
    return *this;
}

Base::~Base () {}

Base * generate ( void )
{
    switch (rand() % 3)
    {
    case 0:
        return new A("A");
    case 1:
        return new B("B");
    case 2:
        return new C("C");
    default:
        return NULL;
    }
}

void identify ( Base * p )
{
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;  
}

void identify ( Base & p )
{
    try {
        A & a = dynamic_cast<A &>(p);
        std::cout << a.getType() << std::endl;
        return ;
    }
    catch(std::bad_cast) {}
    try {
        B & b = dynamic_cast<B &>(p);
        std::cout << b.getType() << std::endl;
        return ;
    }
    catch(std::bad_cast) {}
    try {
        C & c = dynamic_cast<C &>(p);
        std::cout << c.getType() << std::endl;
        return ;
    }
    catch(std::bad_cast) {}
}
