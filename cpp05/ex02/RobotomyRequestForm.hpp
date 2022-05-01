/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:55:12 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/15 17:08:02 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ROBOTOMYREQUESTFORM_HPP__
#define __ROBOTOMYREQUESTFORM_HPP__

#include "Bureaucrat.hpp"
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
    private:
        RobotomyRequestForm () : Form("", "", 42, 42){} ;

    public:
        RobotomyRequestForm ( std::string const & target ) ;
        RobotomyRequestForm ( RobotomyRequestForm const & other ) ;
        RobotomyRequestForm & operator = ( RobotomyRequestForm const & other ) ;
        ~RobotomyRequestForm () ;

        void action(Bureaucrat const &executor) const ;
};

#endif
