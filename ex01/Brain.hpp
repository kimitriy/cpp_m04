#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>
# include <sstream>
# include "Cat.hpp"
# include "Dog.hpp"

# define N 10

class	Brain
{
	private:
		std::string int2str(int num);
	
	protected:
		std::string	m_ideas[N];

		void	msgDfltCnstr( std::string className );
		void	msgPrmCnstr( std::string className );
		void	msgCopyCnstr( std::string className );
		void	msgDstr( std::string className );

	public:
		//default constructor
		Brain( std::string className );

		//copy constructor
		Brain( const Brain& other );

		//destructor
		~Brain( void );

		//[=] operator overload
		Brain& operator= ( const Brain& other );

		//m-methods
		void	printIdeas( void );
};

#endif