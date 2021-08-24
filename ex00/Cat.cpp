# include "Cat.hpp"

//default constructor
Cat::Cat( void )
	: Animal( "Cat" ), m_sound( "Meow!" )
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
	this->m_sound = other.m_sound;

	return ( *this );
}

//getter
std::string Cat::getSound( void ) const
{
	return ( m_sound );
}

//m-methods
void	Cat::makeSound( void ) const
{
	std::cout << F_R_GRN << "Animal " << F_R_PRPL << getType() << F_R_GRN << " makes " << F_R_PRPL << getSound() << F_R_GRN << " sound." << RESET << std::endl;
}