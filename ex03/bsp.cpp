/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   bsp.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/27 15:35:31 by mforstho      #+#    #+#                 */
/*   Updated: 2023/03/27 16:43:41 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float sign (Point point, Point p1, Point p2)
{
    return ((point.get_x().toFloat() - p2.get_x().toFloat()) * (p1.get_y().toFloat() - p2.get_y().toFloat()) - (p1.get_x().toFloat() - p2.get_x().toFloat()) * (point.get_y().toFloat() - p2.get_y().toFloat()));
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
	float d1, d2, d3;
    bool has_neg, has_pos;

    d1 = sign(point, a, b);
    d2 = sign(point, b, c);
    d3 = sign(point, c, a);

    has_neg = (d1 <= 0) || (d2 <= 0) || (d3 <= 0);
    has_pos = (d1 >= 0) || (d2 >= 0) || (d3 >= 0);

    return !(has_neg && has_pos);
}
