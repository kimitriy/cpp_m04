#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:
		std::string	m_sound;
		Brain 		*m_brain;

	public:
		//default constructor
		Dog( void );

		//copy constructor
		Dog( const Dog& other );

		//destructor
		virtual ~Dog( void );

		//[=] operator overload
		Dog& operator= ( const Dog& other );

		//getter
		std::string getSound( void ) const;

		//m-methods
		virtual void	makeSound( void ) const;
};

#endif