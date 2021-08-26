#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
	private:

	public:
		//default constructor
		Cure( void );

		//copy constructor
		Cure( const Cure& other );

		//destructor
		virtual ~Cure( void );

		//[=] operator overload
		Cure& operator= ( const Cure& other );

		//setter

		//getter

		//m-methods
		virtual AMateria*	clone( void ) const;
};

#endif