#include "AMateria.hpp"

//public
//default constructor
AMateria::AMateria( void )
	: m_type( "Unknown" )
{
	
}

//param constructor
AMateria::AMateria( std::string type)
	: m_type( type )
{
	
}

//copy constructor
AMateria::AMateria( const AMateria& other )
{
	*this = other;
	
}

//destructor
AMateria::~AMateria( void )
{
	
}

//[=] operator overload
AMateria& AMateria::operator= ( const AMateria& other )
{
	if (this == &other)
		return ( *this );
	this->m_type = other.getType();

	return ( *this );
}

//getter
std::string const & AMateria::getType( void ) const
{
	return ( m_type );
}

//m-methods
// virtual AMateria *clone( void ) const = 0
// virtual void	use( ICharacter& target )