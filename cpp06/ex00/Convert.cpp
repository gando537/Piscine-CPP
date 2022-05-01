/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 15:06:32 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/16 16:07:53 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

std::string const & Convert::getValue () const
{
    return (this->_value) ;
}

char Convert::toChar () const
{
    int n;

	try
	{
		n = std::stoi(this->_value);
		if (n < 0 || n > 255)
		{
			throw Convert::ImpossibleException();
		}
	}
	catch (...)
	{
		throw Convert::ImpossibleException();
	}
	if (!isprint(n))
	{
		throw Convert::NonDisplayableException();
	}
	return (static_cast<char>(n));
}

int Convert::toInt () const
{
	int n;

	try
	{
		n = std::stoi(this->_value);
	}
	catch (...)
	{
		throw Convert::ImpossibleException();
	}
	return (n);
}

float Convert::toFloat () const
{
	float f;

	try
	{
		f = std::stof(this->_value);
	}
	catch (...)
	{
		throw Convert::ImpossibleException();
	}
	return (f);
}

double Convert::toDouble () const
{
	float d;

	try
	{
		d = std::stod(this->_value);
	}
	catch (...)
	{
		throw Convert::ImpossibleException();
	}
	return (d);
}

std::ostream & operator << (std::ostream & os, const Convert & convert)
{
	os << "char: ";
	try
	{
		char c = convert.toChar();
		os << "'" << c << "'" << std::endl;
	}
	catch (const std::exception &e)
	{
		os << e.what() << std::endl;
	}

	os << "int: ";
	try
	{
		os << convert.toInt() << std::endl;
	}
	catch (const std::exception &e)
	{
		os << e.what() << std::endl;
	}

	os << "float: ";
	try
	{
		float f = convert.toFloat();

		if (std::isnan(f) && std::signbit(f))
			os << "-";
		os << f;
		if (!std::isnan(f) && f - (int)f == 0)
			os << ".0";
		os << "f" << std::endl;
	}
	catch (const std::exception &e)
	{
		os << e.what() << std::endl;
	}

	os << "Double: ";
	try
	{
		double d = convert.toDouble();

		if (std::isnan(d) && std::signbit(d))
			os << "-";
		os << d;
		if (!std::isnan(d) && d - (int)d == 0)
			os << ".0";
		os << std::endl;
	}
	catch (const std::exception &e)
	{
		os << e.what() << std::endl;
	}
	return (os);
}
