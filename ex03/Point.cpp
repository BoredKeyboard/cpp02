/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Point.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/27 15:35:35 by mforstho      #+#    #+#                 */
/*   Updated: 2023/03/27 16:41:37 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : x(0), y(0) {}

Point::Point(const float a, const float b) : x(a), y(b) {}

Point::Point(Point const & src) : x(src.x), y(src.y) {}

Point::~Point(void) {
	// std::cout << "Destructor called" << std::endl;
}

Point & Point::operator=(Point const & src) {
	if (this == &src)
		return (*this);
	throw std::runtime_error("Cannot use '=' on Point");
	return (*this);
}

Fixed const &	Point::get_x(void) {
	return (this->x);
}

Fixed const &	Point::get_y(void) {
	return (this->y);
}
