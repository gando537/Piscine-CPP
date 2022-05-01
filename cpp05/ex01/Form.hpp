/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 13:14:56 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/15 15:31:23 by mdiallo          ###   ########.fr       */
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

        std::string _name ;
        const int _gradeSign ;
        bool _boolean ;
        const int _gradeExec ;

        Form() : _name(""), _gradeSign(42), _boolean(false), _gradeExec(42) {};

    public :

        Form ( std::string const & name, int gradeSign, int gradeExec ) ;
	    Form ( Form const & other ) ;
	    Form & operator = ( Form const & other ) ;
        virtual ~Form () ;

        void beSigned ( Bureaucrat const & bureaucrat ) ;
        std::string  getName () const ;
        bool getBool () const ;
        int getGradeSign () const ;
        int getGradeExec () const ;

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
};

std::ostream & operator << ( std::ostream & os, Form const & form ) ;

#endif
