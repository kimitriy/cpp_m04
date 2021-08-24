# include "Cat.hpp"

//default constructor
Cat::Cat( void ) : Animal( "Cat" )
{
	msgDefCnstr( "Cat" );
}

//copy constructor
Cat::Cat( const Cat& other )
{
	*this = other;
	msgCopyCnstr( "Cat" );
}

//destructor
Cat::~Cat( void )
{
	msgDstr( "Cat" );
}

//[=] operator overload
Cat& Cat::operator= ( const Cat& other )
{
	if (this == &other)
		return ( *this );
	this->m_type = other.m_type;

	return ( *this );
}

//m-methods
void	Cat::makeSound( void ) const
{
	std::cout << F_R_GRN << "Cat makes meow sound." << RESET << std::endl;
}