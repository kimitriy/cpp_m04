#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria	*m_materiaArr[4];

	public:
		//default constructor
		MateriaSource( void );

		//copy constructor
		MateriaSource( const MateriaSource& other );
		
		//destructor
		virtual ~MateriaSource( void );

		//[=] operator overload
		MateriaSource&	operator= ( const MateriaSource& other );
		
		//methods
		virtual void learnMateria( AMateria* materia );
		virtual AMateria* createMateria( std::string const & type );
};

#endif