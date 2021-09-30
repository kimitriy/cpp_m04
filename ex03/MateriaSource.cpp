# include "MateriaSource.hpp"

//public
//default constructor
MateriaSource::MateriaSource( void )
	: IMateriaSource()
{
	int	i = 0;
	while (i < 4)
	{
		m_materiaArr[i] = NULL;
		i++;
	}
	std::cout << F_R_PRPL << "MateriaSource default constructor started." << RESET << std::endl;
}

//copy constructor
MateriaSource::MateriaSource( const MateriaSource& other )
	: IMateriaSource()
{
	std::cout << F_R_PRPL << "MateriaSource copy constructor started." << RESET << std::endl;
	*this = other;
}

//destructor
MateriaSource::~MateriaSource( void )
{
	std::cout << F_R_PRPL << "MateriaSource destructor started." << RESET << std::endl;
	int	i = 0;
	while (i < 4)
	{
		delete this->m_materiaArr[i];
		i++;
	}
	// delete[] m_materiaArr[4];
}

//[=] operator overload
MateriaSource& MateriaSource::operator= ( const MateriaSource& other )
{
	if (this != &other)
	{
		int	i = 0;
		while (i < 4)
		{
			delete this->m_materiaArr[i];
			this->m_materiaArr[i] = other.m_materiaArr[i]->clone();
			i++;
		}
	}
	return ( *this );
}

//m-methods
void	MateriaSource::learnMateria( AMateria* materia )
{
	int	i = 0;
	while (i < 4)
	{
		if (m_materiaArr[i] == NULL)
		{
			m_materiaArr[i] = materia;
			std::cout << F_R_YLLW << m_materiaArr[i]->getType() << " has learned." << RESET << std::endl;
			break ;
		}
		i++;
	}
}

AMateria*	MateriaSource::createMateria( std::string const & type )
{
	std::string tmp;
	AMateria* rv;
	
	int	i = 0;
	while (i < 4)
	{
		if (m_materiaArr[i] != NULL)
		{
			tmp = m_materiaArr[i]->getType();
			if (tmp.compare( type ) == 0)
			{
				rv = m_materiaArr[i]->clone();
				std::cout << F_R_YLLW << rv->getType() << " has cloned." << RESET << std::endl;
				return ( rv );
			}
		}
		else
			break ;
		i++;
	}
	return ( NULL );
}