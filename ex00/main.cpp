#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int		main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	const WrongAnimal* beta = new WrongAnimal();
	const WrongAnimal* b = new WrongCat();

	std::cout << beta->getType() << " " << std::endl;
	std::cout << b->getType() << " " << std::endl;

	beta->makeSound();
	b->makeSound();

	return ( 0 );
}