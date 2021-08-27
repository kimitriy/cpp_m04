#include "AMateria.hpp"

//public
//default constructor
AMateria::AMateria( void )
	: m_type( "Unknown" )
{
	std::cout << F_R_GRN << "AMateria default constructor started." << RESET << std::endl;
}

//param constructor
AMateria::AMateria( std::string const & type )
	: m_type( type )
{
	std::cout << F_R_GRN << "AMateria param constructor started." << RESET << std::endl;
}

//copy constructor
AMateria::AMateria( const AMateria& other )
{
	*this = other;
	std::cout << F_R_GRN << "AMateria copy constructor started." << RESET << std::endl;
}

//destructor
AMateria::~AMateria( void )
{
	std::cout << F_R_GRN << "AMateria destructor started." << RESET << std::endl;
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
void	AMateria::use( ICharacter& target )
{
	( void )target;
}