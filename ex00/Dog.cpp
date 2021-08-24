# include "Dog.hpp"

//default constructor
Dog::Dog( void ) : Animal( "Dog" )
{
	msgDefCnstr( "Dog" );
}

//copy constructor
Dog::Dog( const Dog& other )
{
	*this = other;
	msgCopyCnstr( "Dog" );
}

//destructor
Dog::~Dog( void )
{
	msgDstr( "Dog" );
}

//[=] operator overload
Dog& Dog::operator= ( const Dog& other )
{
	if (this == &other)
		return ( *this );
	this->m_type = other.m_type;

	return ( *this );
}

//m-methods
void	Dog::makeSound( void ) const
{
	std::cout << F_R_GRN << "Dog makes woof sound." << RESET << std::endl;
}