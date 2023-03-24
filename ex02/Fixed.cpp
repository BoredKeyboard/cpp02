/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/22 16:32:16 by mforstho      #+#    #+#                 */
/*   Updated: 2023/03/24 16:52:13 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) {
	std::cout << "Default constructor called" << std::endl;
	this->_fp_nbr = 0;
}

Fixed::Fixed(Fixed const & src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(Fixed const &src) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &src)
		return (*this);
	this->_fp_nbr = src.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const {
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->_fp_nbr);
}

void Fixed::setRawBits(int const raw) {
	// std::cout << "setRawBits member function called" << std::endl;
	this->_fp_nbr = raw;
}

Fixed::Fixed(const int n) {
	std::cout << "Int constructor called" << std::endl;
	this->_fp_nbr = n * (1 << this->_fbit_count);
}

Fixed::Fixed(const float f) {
	std::cout << "Float constructor called" << std::endl;
	this->_fp_nbr = roundf(f * (1 << this->_fbit_count));
}

float Fixed::toFloat(void) const {
	return ((float)this->getRawBits() / (float)(1 << this->_fbit_count));
}

int Fixed::toInt(void) const {
	return ((int)this->getRawBits() / (int)(1 << this->_fbit_count));
}

std::ostream &operator<<(std::ostream &os, Fixed const &src) {
	os << src.toFloat();
	return (os);
}




int Fixed::min(int &n1, int &n2) {
	if (n1 < n2)
		return (n1);
	return (n2);
}

const int Fixed::min(int const &n1, int const &n2) {
	if (n1 < n2)
		return (n1);
	return (n2);
}

int Fixed::max(int &n1, int &n2) {
	if (n1 > n2)
		return (n1);
	return (n2);
}

const int Fixed::max(int const &n1, int const &n2) {
	if (n1 > n2)
		return (n1);
	return (n2);
}
