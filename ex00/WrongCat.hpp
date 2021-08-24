#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	private:
		std::string	m_sound;

	public:
		//default constructor
		WrongCat( void );

		//copy constructor
		WrongCat( const WrongCat& other );

		//destructor
		~WrongCat( void );

		//[=] operator overload
		WrongCat& operator= ( const WrongCat& other );

		//getter
		std::string getSound( void ) const;

		//m-methods
		void	makeSound( void ) const;
};

#endif