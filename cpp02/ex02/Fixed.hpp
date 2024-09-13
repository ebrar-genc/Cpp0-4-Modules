#ifndef FIXED_HPP
#define FIXED_HPP

#include<iostream>
#include<cmath>

class Fixed{

    public:
        Fixed(void);
        Fixed(Fixed const &src);
        ~Fixed(void);
        int		getRawBits( void ) const;
	    void	setRawBits( int const raw );
        Fixed & operator= (Fixed const & rhs);

        Fixed( int const n );
	    Fixed( float const n );
        float	toFloat( void ) const;
	    int		toInt( void ) const;

        bool operator>(Fixed const &other);
        bool operator<(Fixed const &other);
        bool operator>=(Fixed const &other);
        bool operator<=(Fixed const &other);
        bool operator==(Fixed const &other);
        bool operator!=(Fixed const &other);


        Fixed operator+(Fixed const &other);
        Fixed operator-(Fixed const &other);
        Fixed operator*(Fixed const &other);
        Fixed operator/(Fixed const &other);

        Fixed operator++();
        Fixed operator--();
        Fixed operator++(int);
        Fixed operator--(int);

        static Fixed& min(Fixed& fixedA, Fixed& fixedB);
        static const Fixed& min(Fixed const &fixedA, Fixed const &fixedB);
        static Fixed& max(Fixed& fixedA, Fixed& fixedB);
        static const Fixed& max(Fixed const &fixedA, Fixed const &fixedB);
       

    private:
        int	_fixedPoint;
	    static const int _fractionalBit = 8;
};

std::ostream &operator<<(std::ostream &out, Fixed const &value);

#endif