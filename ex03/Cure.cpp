# include "Cure.hpp"

//default constructor
Cure::Cure( void )
	: AMateria( "Cure" )
{

}

//copy constructor
Cure::Cure( const Cure& other )
{
	*this = other;
}

//destructor
Cure::~Cure( void )
{

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