#include "WrongAnimal.hpp"

//protected
void	WrongAnimal::msgDefCnstr( std::string className )
{
	std::cout << F_R_CYAN << "Default constructor started. " << className << " " << F_R_PRPL << m_type << F_R_CYAN << " constructed." << RESET << std::endl;
}

void	WrongAnimal::msgPrmCnstr( std::string className )
{
	std::cout << F_R_CYAN << "Parametric constructor started. " << className << " " << F_R_PRPL << m_type << F_R_CYAN << " constructed." << RESET << std::endl;
}

void	WrongAnimal::msgCopyCnstr( std::string className )
{
	std::cout << F_R_CYAN << "Copy constructor started. " << className << " " << F_R_PRPL << m_type << F_R_CYAN << " constructed." << RESET << std::endl;
}

void	WrongAnimal::msgDstr( std::string className )
{
	std::cout << F_R_YLLW << "Destructor started. " << className << " " << F_R_PRPL << m_type << F_R_YLLW << " destructed." << RESET << std::endl;
}

//public
//default constructor
WrongAnimal::WrongAnimal( void )
	: m_type( "Unknown" )
{
	msgDefCnstr( "WrongAnimal" );
}

//param constructor
WrongAnimal::WrongAnimal( std::string type )
	: m_type( type )
{
	msgPrmCnstr( "WrongAnimal" );
}

//copy constructor
WrongAnimal::WrongAnimal( const WrongAnimal& other )
{
	*this = other;
	msgCopyCnstr( "WrongAnimal" );
}

//destructor
WrongAnimal::~WrongAnimal( void )
{
	msgDstr( "WrongAnimal" );
}

//[=] operator overload
WrongAnimal& WrongAnimal::operator= ( const WrongAnimal& other )
{
	if (this == &other)
		return ( *this );
	this->m_type = other.m_type;

	return ( *this );
}

//getter
std::string	WrongAnimal::getType( void ) const
{
	return ( m_type );
}

//m-methods
void	WrongAnimal::makeSound( void ) const
{
	std::cout << F_R_GRN << "WrongAnimal " << F_R_PRPL << m_type << F_R_GRN << " makes no sound at all." << RESET << std::endl;
}