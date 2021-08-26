# include "IMateriaSource.hpp"

//public
//destructor
IMateriaSource::~IMateriaSource( void )
{
	std::cout << F_R_YLLW << "Destructor started. " << F_R_PRPL << "IMateriaSource" << F_R_YLLW << " is destructed." << RESET << std::endl;
}

//[=] operator overload
IMateriaSource& IMateriaSource::operator= ( const IMateriaSource& other )
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
virtual ~IMateriaSource() {}
virtual void learnMateria(AMateria*) = 0;
virtual AMateria* createMateria(std::string const & type) = 0;