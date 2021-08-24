#include "Brain.hpp"

//private
std::string Brain::int2str(int num)
{
	std::ostringstream cnvrt;
	cnvrt << num;
	
	return ( cnvrt.str() );
}

//protected
void	Brain::msgDfltCnstr( std::string className )
{
	std::cout << F_R_CYAN << "Default constructor started. " << F_R_PRPL << className << F_R_CYAN << " is constructed." << RESET << std::endl;
}

void	Brain::msgPrmCnstr( std::string className )
{
	std::cout << F_R_CYAN << "Parametric constructor started. " << F_R_PRPL << className << F_R_CYAN << " is constructed." << RESET << std::endl;
}

void	Brain::msgCopyCnstr( std::string className )
{
	std::cout << F_R_CYAN << "Copy constructor started. " << F_R_PRPL << className << F_R_CYAN << " is constructed." << RESET << std::endl;
}

void	Brain::msgDstr( std::string className )
{
	std::cout << F_R_YLLW << "Destructor started. " << F_R_PRPL << className << F_R_CYAN << " is destructed." << RESET << std::endl;
}

//public
//default constructor
Brain::Brain( std::string className )
{
	int	i = 0;
	while (i < N)
	{
		m_ideas[i] = className + "'s idea " + int2str( i + 1 );
		i++;
	}
	msgDfltCnstr( "Brain" );
}

//copy constructor
Brain::Brain( const Brain& other )
{
	*this = other;
	msgCopyCnstr( "Brain" );
}

//destructor
Brain::~Brain( void )
{
	msgDstr( "Brain" );
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

//m-methods
void	Brain::printIdeas( void )
{
	int	i = 0;
	while (i < N)
	{
		std::cout << F_R_BLU << i + 1 << ": " << F_R_GRN << m_ideas[i] << RESET << std::endl;
		i++;
	}
}