#ifndef FIXED_HPP
#define FIXED_HPP

#include<iostream>
#include<cmath>

class Fixed{

    public:
        Fixed(void);
        Fixed( int const n );
	    Fixed( float const n );
        Fixed(Fixed const &src);
        ~Fixed(void);
        
        Fixed & operator= (Fixed const & rhs);
        float	toFloat( void ) const;
	    int		toInt( void ) const;
        int		getRawBits( void ) const;
	    void	setRawBits( int const raw );

    private:
        int	_fixedPoint;
	    static const int _fractionalBit = 8;
};

std::ostream &operator<<(std::ostream &out, Fixed const &value);

#endif