#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
	public:
		//default constructor
		Dog( void );

		//copy constructor
		Dog( const Dog& other );

		//destructor
		~Dog( void );

		//[=] operator overload
		Dog& operator= ( const Dog& other );

		//m-methods
		virtual void	makeSound( void ) const;
};

#endif