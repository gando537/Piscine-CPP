/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 14:16:26 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/15 15:34:16 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat ( std::string const & name, int grade ) :
     _name(name)
{
    if (grade <= 0)
        throw (Bureaucrat::GradeTooHighException()) ;
    if (grade > 150)
        throw (Bureaucrat::GradeTooLowException()) ;
    this->_grade = grade ;
}

Bureaucrat::Bureaucrat ( Bureaucrat const & other ) : _name(other._name)
{
	this->_grade = other._grade;
}

Bureaucrat & Bureaucrat::operator = ( Bureaucrat const & other )
{
	if (this != &other)
		this->_grade = other._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat ()
{}

std::string  Bureaucrat::getName () const
{
    return (this->_name) ;
}

int Bureaucrat::getGrade () const
{
    return (this->_grade) ;
}

void Bureaucrat::setDecreaseGrade ( int value )
{
    if (this->_grade + value > 150)
    {
        Bureaucrat::GradeTooLowException e ;
        throw (e) ;
    }
    if (this->_grade + value < 1)
    {
        Bureaucrat::GradeTooHighException e ;
        throw (e) ;
    }
    this->_grade += value ;
}

void Bureaucrat::setIncreaseGrade ( int value )
{
    if (this->_grade - value < 1)
    {
        Bureaucrat::GradeTooHighException e ;
        throw (e) ;
    }
    if (this->_grade - value > 150)
    {
        Bureaucrat::GradeTooLowException e ;
        throw (e) ;
    }
    this->_grade -= value ;
}

void Bureaucrat::signForm ( Form & form )
{
	try
	{
		form.beSigned(*this);
		std::cout << *this << " signs " << form << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << *this << " couldn’t sign " << form << " because " << e.what() << std::endl;
	}
}

const char * Bureaucrat::GradeTooHighException::what () const throw()
{
    return ("Grade Too High") ;
}

const char * Bureaucrat::GradeTooLowException::what () const throw()
{
    return ("Grade Too Low") ;
}

std::ostream & operator << ( std::ostream & os, Bureaucrat const & bureaucrat )
{
    os << "Name : "  << bureaucrat.getName() << " Grade : " << bureaucrat.getGrade() ;
    return (os);
}

