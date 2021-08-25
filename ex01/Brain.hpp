#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>
# include <sstream>
# include "Animal.hpp"

# define N 10

class	Brain
{
	private:
		std::string	m_ideas[N];
		std::string m_host;

		std::string int2str(int num);

	public:
		//default constructor
		Brain( std::string className );

		//copy constructor
		Brain( const Brain& other );

		//destructor
		virtual ~Brain( void );

		//[=] operator overload
		Brain& operator= ( const Brain& other );

		//setter
		void	setIdea( int indx, std::string idea );
		virtual void	setAllIdeas( std::string idea );

		//getter
		std::string	getIdea( int indx ) const;

		//m-methods
		void	printIdeas( void );
};

#endif