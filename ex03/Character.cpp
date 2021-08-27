#include "Character.hpp"

//public
//default constructor
Character::Character( void )
	: ICharacter(), m_name( "noname" )
{
	int	i = 0;
	while (i < 4)
	{
		m_inventory[i] = NULL;
		i++;
	}
	std::cout << F_R_RED << "Character default constructor started." << RESET << std::endl;
}

//param constructor
Character::Character( std::string name )
	: ICharacter(), m_name( name )
{
	int	i = 0;
	while (i < 4)
	{
		m_inventory[i] = NULL;
		i++;
	}
	std::cout << F_R_RED << "Character param constructor started." << RESET << std::endl;
}

//copy constructor
Character::Character( const Character& other )
	: ICharacter()
{
	*this = other;
	std::cout << F_R_RED << "Character copy constructor started." << RESET << std::endl;
}

//destructor
Character::~Character( void )
{
	std::cout << F_R_RED << "Character destructor started." << RESET << std::endl;
}

//[=] operator overload
Character& Character::operator= ( const Character& other )
{
	if (this == &other)
		return ( *this );
	this->m_name = other.getName();
	int	i = 0;
	while (i < 4)
	{
		m_inventory[i] = other.m_inventory[i];
		i++;
	}
	return ( *this );
}

//setter
void	Character::setName( std::string name )
{
	m_name = name;
}

//getter
std::string const & Character::getName( void ) const
{
	return ( m_name );
}

//m-methods

void	Character::equip( AMateria* m )
{
	int	i = 0;
	while (i < 4)
	{
		if (m_inventory[i] == NULL)
		{
			m_inventory[i] = m;
			std::cout << F_R_YLLW << m->getType() << " has equiped." << RESET << std::endl;
			break ;
		}
		i++;
	}
}

void	Character::unequip( int idx )
{
	if (idx >= 0 && idx < 4 && m_inventory[idx] != NULL)
	{
		std::cout << F_R_YLLW << m_inventory[idx]->getType() << " has unequiped." << RESET << std::endl;
		m_inventory[idx] = NULL;
	}
}

void	Character::use( int idx, ICharacter& target )
{
	if (idx >= 0 && idx < 4 && m_inventory[idx] != NULL)
	{
		std::cout << F_R_YLLW << "Character " << this->getName() << " uses " << m_inventory[idx]->getType() << " materia." << RESET << std::endl;
		m_inventory[idx]->use( target );
	}
}