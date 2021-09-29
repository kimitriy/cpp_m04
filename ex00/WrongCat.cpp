# include "WrongCat.hpp"

//default constructor
WrongCat::WrongCat( void )
	: WrongAnimal( "WrongCat" ), m_sound( "Wrong Meow!" )
{
	msgDefCnstr( "WrongCat" );
}

//copy constructor
WrongCat::WrongCat( const WrongCat& other )
{
	*this = other;
	msgCopyCnstr( "Cat" );
}

//destructor
WrongCat::~WrongCat( void )
{
	msgDstr( "WrongCat" );
}

//[=] operator overload
WrongCat& WrongCat::operator= ( const WrongCat& other )
{
	if (this == &other)
		return ( *this );
	this->m_type = other.m_type;
	this->m_sound = other.m_sound;

	return ( *this );
}

//getter
std::string WrongCat::getSound( void ) const
{
	return ( m_sound );
}

//m-methods
void	WrongCat::makeSound( void ) const
{
	std::cout << F_R_GRN << "WrongAnimal " << F_R_PRPL << getType() << F_R_GRN << " makes " << F_R_PRPL << getSound() << F_R_GRN << " sound." << RESET << std::endl;
}