/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:54:55 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/15 18:54:58 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PRESIDENTIALPARDONFORM_HPP__
#define __PRESIDENTIALPARDONFORM_HPP__

#include "Bureaucrat.hpp"
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	PresidentialPardonForm () : Form("", "", 42, 42){};

public:
	PresidentialPardonForm ( std::string const & target ) ;
	PresidentialPardonForm ( PresidentialPardonForm const & other ) ;
	PresidentialPardonForm & operator = ( PresidentialPardonForm const & other ) ;
	~PresidentialPardonForm () ;

	void action ( Bureaucrat const & executor ) const ;
	static Form * create ( std::string const & target ) ;
};

#endif
