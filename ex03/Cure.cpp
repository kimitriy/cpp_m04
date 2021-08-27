# include "Cure.hpp"

//default constructor
Cure::Cure( void )
	: AMateria( "cure" )
{
	std::cout << F_R_CYAN << "Cure default constructor started." << RESET << std::endl;
}

//copy constructor
Cure::Cure( const Cure& other )
{
	*this = other;
	std::cout << F_R_CYAN << "Cure copy constructor started." << RESET << std::endl;
}

//destructor
Cure::~Cure( void )
{
	std::cout << F_R_CYAN << "Cure destructor started." << RESET << std::endl;
}

//[=] operator overload
Cure& Cure::operator= ( const Cure& other )
{
	if (this == &other)
		return ( *this );
	this->m_type = other.m_type;
	
	return ( *this );
}

//setter

//getter

//m-methods
AMateria* Cure::clone( void ) const
{
	AMateria* obj = new Cure();
	return ( obj );
}

void	Cure::use( ICharacter& target )
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}