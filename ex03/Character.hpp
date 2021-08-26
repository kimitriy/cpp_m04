#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character : public ICharacter
{
	protected:
		std::string	m_name;
		AMateria*	m_inventory[4];

	public:
		//default constructor
		Character( void );

		//param constructor
		Character( std::string name );

		//copy constructor
		Character( const Character& other );

		//destructor
		virtual	~Character( void );
		
		//[=] operator overload
		Character&	operator= ( const Character& other );

		//setter
		void	setName( std::string name );

		//getter
		virtual std::string const &	getName( void ) const;

		//methods
		virtual void	equip( AMateria* m );
		virtual void	unequip( int idx );
		virtual void	use( int idx, ICharacter& target );
};
#endif