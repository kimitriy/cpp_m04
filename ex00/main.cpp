#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int		main()
{
	std::cout << "Animal:" << std::endl;
	const Animal* anml = new Animal();
	std::cout << F_R_BLU <<"Type: " << anml->getType() << RESET << std::endl;
	anml->makeSound();
	std::cout << std::endl;

	std::cout << "Animal->Dog:" << std::endl;
	const Animal* ptr_anml_d = new Dog();
	std::cout << F_R_BLU <<"Type: " << ptr_anml_d->getType() << RESET << std::endl;
	ptr_anml_d->makeSound();
	std::cout << std::endl;

	std::cout << "Dog:" << std::endl;
	const Dog* d = new Dog();
	std::cout << F_R_BLU <<"Type: " << d->getType() << RESET << std::endl;
	d->makeSound();
	std::cout << std::endl;
	
	std::cout << "Animal->Cat:" << std::endl;
	const Animal* ptr_anml_c = new Cat();
	std::cout << F_R_BLU <<"Type: " << ptr_anml_d->getType() << RESET << std::endl;
	ptr_anml_d->makeSound(); //will output the cat sound!
	std::cout << std::endl;
	
	std::cout << "Cat:" << std::endl;
	const Cat* c = new Cat();
	std::cout << F_R_BLU <<"Type: " << c->getType() << RESET << std::endl;
	c->makeSound();
	std::cout << std::endl;

	std::cout << "WrongAnimal:" << std::endl;
	const WrongAnimal* wanml = new WrongAnimal();
	std::cout << F_R_BLU <<"Type: " << wanml->getType() << RESET << std::endl;
	wanml->makeSound();
	std::cout << std::endl;

	std::cout << "WrongAnimal->WrongCat:" << std::endl;
	const WrongAnimal* ptr_wanml_wc = new WrongCat();
	std::cout << F_R_BLU <<"Type: " << ptr_wanml_wc->getType() << RESET << std::endl;
	ptr_wanml_wc->makeSound();
	std::cout << std::endl;

	std::cout << "WrongCat:" << std::endl;
	const WrongCat* wc = new WrongCat();
	std::cout << F_R_BLU <<"Type: " << wc->getType() << RESET << std::endl;
	wc->makeSound();
	std::cout << std::endl;

	delete anml;
	std::cout << std::endl;
	delete ptr_anml_d;
	std::cout << std::endl;
	delete d;
	std::cout << std::endl;
	delete ptr_anml_c;
	std::cout << std::endl;
	delete c;
	std::cout << std::endl;
	delete wanml;
	std::cout << std::endl;
	delete ptr_wanml_wc;
	std::cout << std::endl;
	delete wc;

	return ( 0 );
}