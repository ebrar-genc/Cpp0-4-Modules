#include "Fixed.hpp"

Fixed::Fixed(void): _fixedPoint(0)
{
    std::cout << "Default constructor called" << std::endl; 
}

Fixed::Fixed(Fixed const & src) : _fixedPoint(0)
{
    std::cout << "Copy constructor called" << std::endl;
    this->setRawBits(src.getRawBits());
}

Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;
}

Fixed &	Fixed::operator=( Fixed const & rhs ) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_fixedPoint = rhs.getRawBits();
	return *this;
}

int		Fixed::getRawBits( void ) const {
	return this->_fixedPoint;
}

void    Fixed::setRawBits( int const raw ) {
    this->_fixedPoint = raw;
}

Fixed::Fixed(int const n)
{
	this->_fixedPoint = n * 256.0;
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( float const n )
{
	this->_fixedPoint = roundf(n * 256.0f);
    std::cout << "Float constructor called" << std::endl;
}

int Fixed::toInt() const {
	return this->_fixedPoint / 256;
}

float Fixed::toFloat() const{
	return this->_fixedPoint / 256.0f;
}

std::ostream &operator<<(std::ostream& out, Fixed const &value)
{
	out << value.toFloat();
	return out;
}