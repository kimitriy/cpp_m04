#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
	private:

	public:
		//default constructor
		Ice( void );

		//copy constructor
		Ice( const Ice& other );

		//destructor
		virtual ~Ice( void );

		//[=] operator overload
		Ice& operator= ( const Ice& other );

		//setter

		//getter

		//m-methods
		virtual AMateria*	clone( void ) const;
		virtual void		use( ICharacter& target );
};

#endif