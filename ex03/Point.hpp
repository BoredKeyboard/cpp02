#pragma once
#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point {
	private:
		Fixed const x;
		Fixed const y;
	public:
		Point(void);
		Point(const float a, const float b);
		Point(Point const & src);
		~Point(void);
		Point & operator=(Point const & src);
		Fixed const &	get_x(void);
		Fixed const &	get_y(void);
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif
