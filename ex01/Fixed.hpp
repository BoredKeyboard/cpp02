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
		Fixed & operator=(Fixed const &src);
		int getRawBits(void) const;
		void setRawBits(int const raw);

		Fixed(const int n);
		Fixed(const float f);
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream &operator<<(std::ostream &os, Fixed const &src);

#endif
