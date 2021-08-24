# include "Dog.hpp"

//default constructor
Dog::Dog( void ) 
	: Animal( "Dog" ), m_sound( "Woof!" )
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
	this->m_sound = other.m_sound;

	return ( *this );
}

//getter
std::string Dog::getSound( void ) const
{
	return ( m_sound );
}

//m-methods
void	Dog::makeSound( void ) const
{
	std::cout << F_R_GRN << "Animal " << F_R_PRPL << getType() << F_R_GRN << " makes " << F_R_PRPL << getSound() << F_R_GRN << " sound." << RESET << std::endl;
}