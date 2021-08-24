#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		std::string	m_sound;
		Brain 		*m_brain;

	public:
		//default constructor
		Cat( void );

		//copy constructor
		Cat( const Cat& other );

		//destructor
		virtual ~Cat( void );

		//[=] operator overload
		Cat& operator= ( const Cat& other );

		//getter
		std::string getSound( void ) const;

		//m-methods
		virtual void	makeSound( void ) const;
};

#endif