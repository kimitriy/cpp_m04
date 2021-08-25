# include "Cat.hpp"

//default constructor
Cat::Cat( void )
	: Animal( "Cat" ), m_sound( "Meow!" )
{
	m_brain = new Brain( "Cat" );
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
	delete m_brain;
	msgDstr( "Cat" );
}

//[=] operator overload
Cat& Cat::operator= ( const Cat& other )
{
	if (this == &other)
		return ( *this );
	this->m_type = other.m_type;
	this->m_sound = other.m_sound;
	delete m_brain;
	this->m_brain = new Brain( *other.m_brain );
	// this->m_brain = other.m_brain;
	return ( *this );
}

//setter
void	Cat::setIdea( int indx, std::string idea )
{
	m_brain->setIdea( indx, idea );
}

void	Cat::setAllIdeas( std::string idea )
{
	m_brain->setAllIdeas( idea );
}

//getter
std::string Cat::getSound( void ) const
{
	return ( m_sound );
}

std::string	Cat::getIdea( int indx ) const
{
	return ( m_brain->getIdea( indx ) );
}

//m-methods
void	Cat::makeSound( void )
{
	std::cout << F_R_GRN << "Animal " << F_R_PRPL << getType() << F_R_GRN << " makes " << F_R_PRPL << getSound() << F_R_GRN << " sound." << RESET << std::endl;
}

void	Cat::printIdeas( void )
{
	m_brain->printIdeas();
}