# include "Cat.hpp"

//default constructor
Cat::Cat( void )
	: Animal( "Cat" ), m_sound( "Meow!" )
{
	msgDefCnstr( "Cat" );
	m_brain = new Brain( "Cat" );
}

//copy constructor
Cat::Cat( const Cat& other )
	: Animal( other.getType() ), m_sound( other.getSound() )
{
	msgCopyCnstr( "Cat" );
	this->m_brain = new Brain( *other.m_brain );
}

//destructor
Cat::~Cat( void )
{
	msgDstr( "Cat" );
	delete m_brain;
}

//[=] operator overload
Cat& Cat::operator= ( const Cat& other )
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