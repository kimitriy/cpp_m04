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
}

//copy constructor
MateriaSource::MateriaSource( const MateriaSource& other )
	: IMateriaSource()
{
	*this = other;
}

//destructor
MateriaSource::~MateriaSource( void )
{

}

//[=] operator overload
MateriaSource& MateriaSource::operator= ( const MateriaSource& other )
{
	if (this == &other)
		return ( *this );
	int	i = 0;
	while (i < 4)
	{
		this->m_materiaArr[i] = other.m_materiaArr[i];
		i++;
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
			break ;
		}
		i++;
	}
}

AMateria*	MateriaSource::createMateria( std::string const & type )
{
	int	i = 0;
	while (i < 4)
	{
		if (m_materiaArr[i] == NULL)
			break ;
		std::string tmp = m_materiaArr[i]->getType();
		if (tmp.compare( type ) == 0)
			return ( m_materiaArr[i]->clone() );
		i++;
	}
	return ( NULL );
}