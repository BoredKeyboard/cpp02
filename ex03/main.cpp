/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/22 15:26:40 by mforstho      #+#    #+#                 */
/*   Updated: 2023/03/27 16:46:37 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void ) {
	{
		Point	a(1, 3);
		Point	b(1, 5);
		Point	c(4, 5);
		Point	point(2, 4);
		std::cout << bsp(a, b, c, point) << std::endl;
		std::cout << std::endl;
	}
	{
		Point	a(1, 3);
		Point	b(1, 5);
		Point	c(4, 5);
		Point	point(1, 3);
		std::cout << bsp(a, b, c, point) << std::endl;
		std::cout << std::endl;
	}
	{
		Point	a(1, 3);
		Point	b(1, 5);
		Point	c(4, 5);
		Point	point(1, 4);
		std::cout << bsp(a, b, c, point) << std::endl;
		std::cout << std::endl;
	}
	{
		Point	a(1, 3);
		Point	b(1, 5);
		Point	c(4, 5);
		Point	point(2, 6);
		std::cout << bsp(a, b, c, point) << std::endl;
		std::cout << std::endl;
	}
	{
		Point	a(1, 3);
		Point	b(1, 5);
		Point	c(4, 5);
		Point	point(2, 4);
		std::cout << bsp(a, b, c, point) << std::endl;
		std::cout << std::endl;
	}
	{
		Point	a(1, 3);
		Point	b(1, 5);
		Point	c(4, 5);
		Point	point(1.1, 4.9);
		std::cout << bsp(a, b, c, point) << std::endl;
		std::cout << std::endl;
	}
	{
		Point	a(1, 1);
		Point	b(5, 1);
		Point	c(4, 6);
		Point	point(4, 5.9);
		std::cout << bsp(a, b, c, point) << std::endl;
		std::cout << std::endl;
	}
	return (0);
}
