#pragma once
#ifndef FIXED_HPP
# define FIXED_HPP

# include "iostream"

class Fixed {
	private:
		int					_fp_nbr;
		static const int	_fbit_count = 8;
	public:
		Fixed(void);
		Fixed(Fixed const & src);
		~Fixed(void);
		Fixed & operator=(Fixed const & src);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

#endif
