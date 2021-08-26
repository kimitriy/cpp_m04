#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public AMateria
{
	private:
		std::string	m_sound;
		Brain* 		m_brain;

	public:
		//default constructor
		Dog( void );

		//copy constructor
		Dog( const Dog& other );

		//destructor
		virtual ~Dog( void );

		//[=] operator overload
		Dog& operator= ( const Dog& other );

		//setter
		virtual void	setIdea( int indx, std::string idea );
		virtual void	setAllIdeas( std::string idea );

		//getter
		virtual std::string	getSound( void ) const;
		virtual std::string	getIdea( int indx ) const;

		//m-methods
		virtual void	makeSound( void );
		virtual void	printIdeas( void );
};

#endif