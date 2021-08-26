#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

# define RESET "\033[0m"

# define F_R_BLCK "\033[0;30m"
# define F_R_RED "\033[0;31m"
# define F_R_GRN "\033[0;32m"
# define F_R_YLLW "\033[0;33m"
# define F_R_BLU "\033[0;34m"
# define F_R_PRPL "\033[0;35m"
# define F_R_CYAN "\033[0;36m"
# define F_R_WHT "\033[0;37m"

class AMateria //Abstract class
{
	protected:
		std::string	m_type;

	public:
		//default constructor
		AMateria( void );

		//param constructor
		AMateria( std::string const & type );

		//copy constructor
		AMateria( const AMateria& other );

		//destructor
		virtual ~AMateria( void );

		//[=] operator overload
		AMateria& operator= ( const AMateria& other );
		
		//setter
		
		//getter
		std::string const &	getType( void ) const;

		//m-methods
		virtual AMateria	*clone( void ) const = 0;
		virtual void		use( ICharacter& target );
};

#endif