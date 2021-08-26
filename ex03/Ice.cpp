# include "Ice.hpp"

//default constructor
Ice::Ice( void )
	: AMateria( "Ice" )
{

}

//copy constructor
Ice::Ice( const Ice& other )
{
	*this = other;
}

//destructor
Ice::~Ice( void )
{

}

//[=] operator overload
Ice& Ice::operator= ( const Ice& other )
{
	if (this == &other)
		return ( *this );
	this->m_type = other.m_type;
	
	return ( *this );
}

//setter

//getter

//m-methods
AMateria* Ice::clone( void ) const
{
	AMateria* obj = new Ice();
	return ( obj );
}

void	Ice::use( ICharacter& target )
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}