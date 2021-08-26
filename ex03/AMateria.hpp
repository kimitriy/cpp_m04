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

# define F_B_BLCK "\033[1;30m"
# define F_B_RED "\033[1;31m"
# define F_B_GRN "\033[1;32m"
# define F_B_YLLW "\033[1;33m"
# define F_B_BLU "\033[1;34m"
# define F_B_PRPL "\033[1;35m"
# define F_B_CYAN "\033[1;36m"
# define F_B_WHT "\033[1;37m"

# define B_BLCK "\033[7;30m"
# define B_RED "\033[7;31m"
# define B_GRN "\033[7;32m"
# define B_YLLW "\033[7;33m"
# define B_BLU "\033[7;34m"
# define B_PRPL "\033[7;35m"
# define B_CYAN "\033[7;36m"
# define B_WHT "\033[7;37m"

class AMateria
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
		virtual AMateria *clone( void ) const = 0;
		virtual void	use( ICharacter& target );
};

#endif