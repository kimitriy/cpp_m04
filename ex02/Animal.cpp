#include "Animal.hpp"

//protected
void	Animal::msgDefCnstr( std::string className )
{
	std::cout << F_R_CYAN << "Default constructor started. " << className << " " << F_R_PRPL << m_type << F_R_CYAN << " constructed." << RESET << std::endl;
}

void	Animal::msgPrmCnstr( std::string className )
{
	std::cout << F_R_CYAN << "Parametric constructor started. " << className << " " << F_R_PRPL << m_type << F_R_CYAN << " constructed." << RESET << std::endl;
}

void	Animal::msgCopyCnstr( std::string className )
{
	std::cout << F_R_CYAN << "Copy constructor started. " << className << " " << F_R_PRPL << m_type << F_R_CYAN << " constructed." << RESET << std::endl;
}

void	Animal::msgDstr( std::string className )
{
	std::cout << F_R_YLLW << "Destructor started. " << className << " " << F_R_PRPL << m_type << F_R_YLLW << " destructed." << RESET << std::endl;
}

//public
//default constructor
Animal::Animal( void )
	: m_type( "Unknown" )
{
	msgDefCnstr( "Animal" );
}

//param constructor
Animal::Animal( std::string type)
	: m_type( type )
{
	msgPrmCnstr( "Animal" );
}

//copy constructor
Animal::Animal( const Animal& other )
{
	*this = other;
	msgCopyCnstr( "Animal" );
}

//destructor
Animal::~Animal( void )
{
	msgDstr( "Animal" );
}

//[=] operator overload
Animal& Animal::operator= ( const Animal& other )
{
	if (this == &other)
		return ( *this );
	this->m_type = other.getType();

	return ( *this );
}

//getter
std::string Animal::getType( void ) const
{
	return ( m_type );
}
