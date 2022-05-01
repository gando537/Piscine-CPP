/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 13:14:56 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/15 17:55:58 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FORM_H__
#define __FORM_H__

#include <iostream>
#include <string>

class Bureaucrat ;

class Form
{
    private :

        const std::string _target;
        std::string _name ;
        const int _gradeSign ;
        bool _boolean ;
        const int _gradeExec ;

        Form() : _target(""), _name(""), _gradeSign(42), _boolean(false), _gradeExec(42) {};

    public :

        Form (std::string const & target, std::string const & name, int gradeSign, int gradeExec ) ;
	    Form ( Form const & other ) ;
	    Form & operator = ( Form const & other ) ;
        virtual ~Form () ;

        void beSigned ( Bureaucrat const & bureaucrat ) ;
        std::string getTarget () const ;
        std::string  getName () const ;
        bool getBool () const ;
        int getGradeSign () const ;
        int getGradeExec () const ;

        void execute ( Bureaucrat const & executor ) const ;
        virtual void action ( Bureaucrat const & executor ) const = 0 ;

        class GradeTooHighException : public std::exception
        {
            public :
                const char * what () const throw() ;
        };
        
        class GradeTooLowException : public std::exception
        {
            public :
                const char * what () const throw() ;
        };

        class NotSignedException : public std::exception
        {
            public :
                const char * what () const throw() ;
        };
};

std::ostream & operator << ( std::ostream & os, Form const & form ) ;

#endif
