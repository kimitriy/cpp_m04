# include "Dog.hpp"

//default constructor
Dog::Dog( void ) 
	: Animal( "Dog" ), m_sound( "Woof!" )
{
	msgDefCnstr( "Dog" );
	m_brain = new Brain( "Dog" );
}

//copy constructor
Dog::Dog( const Dog& other )
	: Animal( other.getType() ), m_sound( other.getSound() )
{
	msgCopyCnstr( "Dog" );
	this->m_brain = new Brain( *other.m_brain );
}

//destructor
Dog::~Dog( void )
{
	msgDstr( "Dog" );
	delete m_brain;
}

//[=] operator overload
Dog& Dog::operator= ( const Dog& other )
{
	if (this != &other)
	{
		delete m_brain;
		this->m_type = other.Animal::getType();
		this->m_sound = other.getSound();
		this->m_brain = new Brain( *other.m_brain );
	}
	return ( *this );
}

//setter
void	Dog::setIdea( int indx, std::string idea )
{
	m_brain->setIdea( indx, idea );
}

void	Dog::setAllIdeas( std::string idea )
{
	m_brain->setAllIdeas( idea );
}

//getter
std::string Dog::getSound( void ) const
{
	return ( m_sound );
}

std::string	Dog::getIdea( int indx ) const
{
	return ( m_brain->getIdea( indx ) );
}

//m-methods
void	Dog::makeSound( void )
{
	std::cout << F_R_GRN << "Animal " << F_R_PRPL << getType() << F_R_GRN << " makes " << F_R_PRPL << getSound() << F_R_GRN << " sound." << RESET << std::endl;
}

void	Dog::printIdeas( void )
{
	m_brain->printIdeas();
}