#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character : public ICharacter
{
	protected:
		AMateria *inventory[4];

	public:
		//destructor
		virtual ~Character() {}
		
		//methods
		virtual std::string const & getName( void ) const;
		virtual void equip( AMateria* m );
		virtual void unequip( int idx );
		virtual void use( int idx, ICharacter& target );
};
#endif