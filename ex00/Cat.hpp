#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
	public:
		//default constructor
		Cat( void );

		//copy constructor
		Cat( const Cat& other );

		//destructor
		~Cat( void );

		//[=] operator overload
		Cat& operator= ( const Cat& other );

		//m-methods
		virtual void	makeSound( void ) const;
};

#endif