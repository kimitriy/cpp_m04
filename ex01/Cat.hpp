#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		std::string	m_sound;
		Brain* 		m_brain;

	public:
		//default constructor
		Cat( void );

		//copy constructor
		Cat( const Cat& other );

		//destructor
		virtual ~Cat( void );

		//[=] operator overload
		Cat& operator= ( const Cat& other );

		//setter
		virtual void	setIdea( int indx, std::string idea );
		virtual void	setAllIdeas( std::string idea );

		//getter
		virtual std::string	getSound( void ) const;
		virtual std::string	getIdea( int indx ) const;

		//m-methods
		virtual void	makeSound( void ) const;
		virtual void	printIdeas( void );
};

#endif