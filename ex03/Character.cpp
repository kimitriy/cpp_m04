#include "Character.hpp"

//public
//destructor
Character::~Character( void )
{
	std::cout << F_R_YLLW << "Destructor started. " << F_R_PRPL << "ICharacter" << F_R_YLLW << " is destructed." << RESET << std::endl;
}

//m-methods
std::string const & Character::getName( void ) const
{

}

void	Character::equip( AMateria* m )
{

}

void	Character::unequip( int idx )
{

}

void	Character::use( int idx, ICharacter& target )
{

}