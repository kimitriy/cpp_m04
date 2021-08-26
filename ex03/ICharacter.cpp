#include "ICharacter.hpp"

//public
//destructor
ICharacter::~ICharacter( void )
{
	std::cout << F_R_YLLW << "Destructor started. " << F_R_PRPL << "ICharacter" << F_R_YLLW << " is destructed." << RESET << std::endl;
}

//[=] operator overload
ICharacter& ICharacter::operator= ( const ICharacter& other )
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
// virtual std::string const & getName() const = 0
// virtual void equip(AMateria* m) = 0
// virtual void unequip(int idx) = 0