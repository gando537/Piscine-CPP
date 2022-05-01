/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 13:14:30 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/15 17:18:21 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form ( std::string const & target, std::string const & name, int gradeSign, int gradeExec ) :
    _target(target),
    _name(name),
    _gradeSign(gradeSign),
    _boolean(false),
    _gradeExec(gradeExec)
{}

Form::Form ( Form const & other ) :
    _target(other.getTarget()),
    _name(other.getName()),
    _gradeSign(other.getGradeSign()),
    _boolean(other.getBool()),
    _gradeExec(other.getGradeExec())
{}

Form & Form::operator = ( Form const & other )
{
    if (this != &other)
    {
        this->_name = other.getName() ;
        this->_boolean = other.getBool() ;
    }
    return (*this) ;
}

void Form::beSigned ( Bureaucrat const & bureaucrat )
{
    if (bureaucrat.getGrade() > this->_gradeExec)
        throw Form::GradeTooLowException();
    this->_boolean = true;
}

Form::~Form ()
{}

std::string  Form::getName () const
{
    return (this->_name) ;
}

std::string Form::getTarget () const
{
    return (this->_target) ;
}

bool Form::getBool () const
{
    return (this->_boolean) ;
}

int Form::getGradeSign () const
{
    return (this->_gradeSign) ;
}

int Form::getGradeExec () const
{
    return (this->_gradeExec) ;
}

void Form::execute ( Bureaucrat const & executor ) const
{
	if (this->getGradeSign() == false)
		throw Form::NotSignedException();
	if (executor.getGrade() > this->getGradeExec())
		throw Form::GradeTooLowException();
}

const char * Form::GradeTooHighException::what () const throw()
{
    return ("Grade Too High") ;
}

const char * Form::GradeTooLowException::what () const throw()
{
    return ("Grade Too Low") ;
}

const char * Form::NotSignedException::what () const throw()
{
    return ("Not signed") ;
}

std::ostream & operator << ( std::ostream & os, Form const & form )
{
	os << "< " << form.getName() << " sign : " << form.getGradeSign() << ", exec : " << form.getGradeExec();
	if (form.getBool())
		os << ", signed";
	else
		os << ", not signed";
	os << " >";
	return (os);
}
