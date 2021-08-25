#include "Brain.hpp"

//private
std::string Brain::int2str(int num)
{
	std::ostringstream cnvrt;
	cnvrt << num;
	
	return ( cnvrt.str() );
}

//public
//default constructor
Brain::Brain( std::string className )
	: m_host( className )
{
	std::cout << F_R_CYAN << "Default constructor started. " << F_R_PRPL << "Brain" << F_R_CYAN << " is constructed." << RESET << std::endl;
}

//copy constructor
Brain::Brain( const Brain& other )
{
	*this = other;
	std::cout << F_R_CYAN << "Copy constructor started. " << F_R_PRPL << "Brain" << F_R_CYAN << " is constructed." << RESET << std::endl;
}

//destructor
Brain::~Brain( void )
{
	std::cout << F_R_YLLW << "Destructor started. " << F_R_PRPL << "Brain" << F_R_YLLW << " is destructed." << RESET << std::endl;
}

//[=] operator overload
Brain& Brain::operator= ( const Brain& other )
{
	if (this == &other)
		return ( *this );
	int	i = 0;
	while (i < N)
	{
		this->m_ideas[i] = other.m_ideas[i];
		i++;
	}

	return ( *this );
}

//setter
void	Brain::setIdea( int indx, std::string idea )
{
	if (indx >= 0 && indx < N)
		m_ideas[indx] = idea;
	else
		std::cout << F_R_RED << "Sorry! Such an idea can not be put in this Brain" << RESET << std::endl;
}

void	Brain::setAllIdeas( std::string idea )
{
	int	i = 0;
	while (i < N)
	{
		m_ideas[i] = m_host + "'s idea is: " + idea + " " + int2str( i + 1 );
		i++;
	}
}

//getter
std::string	Brain::getIdea( int indx ) const
{
	if (indx >= 0 && indx < N)
		return ( m_ideas[indx] );
	std::cout << F_R_RED << "Sorry! There is no such an idea in this Brain" << RESET << std::endl;
	return ( NULL );
}

//m-methods
void	Brain::printIdeas( void )
{
	int	i = 0;
	while (i < N)
	{
		std::cout << F_R_GRN << m_ideas[i] << RESET << std::endl;
		i++;
	}
}