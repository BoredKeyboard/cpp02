/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/22 15:26:40 by mforstho      #+#    #+#                 */
/*   Updated: 2023/03/27 17:22:42 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;

	std::cout << std::endl << "my own tests:" << std::endl;
	std::cout << "(a < b): " << (a < b) << std::endl;
	std::cout << "(b < a): " << (b < a) << std::endl;
	std::cout << std::endl;

	std::cout << "(a > b): " << (a > b) << std::endl;
	std::cout << "(b > a): " << (b > a) << std::endl;
	std::cout << std::endl;

	std::cout << "(b >= b)   : " << (b >= b) << std::endl;
	std::cout << "(b >= 5.0) : " << (b >= 5.0f) << std::endl;
	std::cout << "(b >= 15.0): " << (b >= 15.0f) << std::endl;
	std::cout << std::endl;

	std::cout << "(b <= b)   : " << (b <= b) << std::endl;
	std::cout << "(b <= 5.0) : " << (b <= 5.0f) << std::endl;
	std::cout << "(b <= 15.0): " << (b <= 15.0f) << std::endl;
	std::cout << std::endl;

	std::cout << "(b == b):    " << (b == b) << std::endl;
	std::cout << "(b == a):    " << (b == a) << std::endl;
	std::cout << std::endl;

	std::cout << "(b != b):    " << (b != b) << std::endl;
	std::cout << "(b != a):    " << (b != a) << std::endl;
	std::cout << std::endl;

	std::cout << "(a + 1)  : " << (a + 1) << std::endl;
	std::cout << "(b - 1)  : " << (b - 1) << std::endl;
	std::cout << "(b * 2)  : " << (b * 2) << std::endl;
	std::cout << "(b / 2)  : " << (b / 2) << std::endl;
	std::cout << std::endl;

	std::cout << "(a)  : " << a << std::endl;
	std::cout << "(++a): " << ++a << std::endl;
	std::cout << "(a)  : " << a << std::endl;
	std::cout << "(a++): " << a++ << std::endl;
	std::cout << "(a)  : " << a << std::endl;
	std::cout << std::endl;

	std::cout << "(a)  : " << a << std::endl;
	std::cout << "(--a): " << --a << std::endl;
	std::cout << "(a)  : " << a << std::endl;
	std::cout << "(a--): " << a-- << std::endl;
	std::cout << "(a)  : " << a << std::endl;
	std::cout << std::endl;

	std::cout << "max(a, b): " << Fixed::max( a, b ) << std::endl;
	std::cout << "min(a, b): " << Fixed::min( a, b ) << std::endl;

	return (0);
}
