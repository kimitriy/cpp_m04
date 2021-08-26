# include "MateriaSource.hpp"

//public
//destructor
MateriaSource::~MateriaSource( void )
{

}

//[=] operator overload
// MateriaSource& MateriaSource::operator= ( const IMateriaSource& other )
// {
// 	if (this == &other)
// 		return ( *this );
// 	int	i = 0;
// 	while (i < N)
// 	{
// 		this->m_ideas[i] = other.m_ideas[i];
// 		i++;
// 	}

// 	return ( *this );
// }

//m-methods
void	MateriaSource::learnMateria(AMateria*)
{

}

AMateria*	MateriaSource::createMateria(std::string const & type)
{

}