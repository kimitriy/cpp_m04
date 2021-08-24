# include "Dog.hpp"

//default constructor
Dog::Dog( void ) 
	: Animal( "Dog" ), m_sound( "Woof!" )
{
	m_brain = new Brain( "Dog" );
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
	delete m_brain;
	msgDstr( "Dog" );
}

//[=] operator overload
Dog& Dog::operator= ( const Dog& other )
{
	if (this == &other)
		return ( *this );
	this->m_type = other.m_type;
	this->m_sound = other.m_sound;
	// delete m_brain;
	// this->m_brain = new Brain( *other.m_brain );
	this->m_brain = other.m_brain;
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