#pragma once
#ifndef FIXED_HPP
# define FIXED_HPP

# include "iostream"
# include "cmath"

class Fixed {
	private:
		int					_fp_nbr;
		static const int	_fbit_count = 8;
	public:
		Fixed(void);
		Fixed(Fixed const &src);
		~Fixed(void);
		Fixed &	operator=(Fixed const &src);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		Fixed(const int n);
		Fixed(const float f);
		float	toFloat(void) const;
		int		toInt(void) const;

		bool	operator>(Fixed const &rhs) const;
		bool	operator<(Fixed const &rhs) const;
		bool	operator>=(Fixed const &rhs) const;
		bool	operator<=(Fixed const &rhs) const;
		bool	operator==(Fixed const &rhs) const;
		bool	operator!=(Fixed const &rhs) const;
		Fixed	operator+(Fixed const &rhs) const;
		Fixed	operator-(Fixed const &rhs) const;
		Fixed	operator*(Fixed const &rhs) const;
		Fixed	operator/(Fixed const &rhs) const;

		Fixed	operator++(int);
		Fixed	&operator++();
		Fixed	operator--(int);
		Fixed	&operator--();

		static Fixed 		&min(Fixed &n1, Fixed &n2);
		static const Fixed	&min(Fixed const &n1, Fixed const &n2);
		static Fixed		&max(Fixed &n1, Fixed &n2);
		static const Fixed	&max(Fixed const &n1, Fixed const &n2);
};

std::ostream &operator<<(std::ostream &os, Fixed const &src);

#endif
