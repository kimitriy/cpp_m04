#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int		main()
{
	Animal a("Dog");
	std::cout << a.getType() << std::endl;
	std::cout << std::endl;
	
	// std::cout << "DOG////////" << std::endl;
	// Dog bobik;
	// std::cout << std::endl;
	// Dog bobik_copy = bobik;
	// std::cout << std::endl;
	// bobik_copy.makeSound();
	// bobik_copy.setIdea(0, "Actually I am not the original bobik, but nonetheless I am real!");
	// std::cout << F_R_RED << bobik_copy.getIdea(0) << RESET << std::endl;
	// std::cout << std::endl;

	// std::cout << "CAT////////" << std::endl;
	// Cat *murzik = new Cat();
	// std::cout << std::endl;
	// Cat murzik_copy = *murzik;
	// std::cout << std::endl;	
	// delete murzik;
	// std::cout << std::endl;
	// murzik_copy.makeSound();
	// murzik_copy.setIdea(0, "Actually I am not the original murzik, but nonetheless I am real!");
	// std::cout << F_R_RED << murzik_copy.getIdea(0) << RESET << std::endl;
	// std::cout << std::endl;
	
	// Animal *arr[10];
	// int i = 0;

	// while(i < 10)
	// {
	// 	if (i < 5)
	// 		arr[i] = new Dog();
	// 	else
	// 		arr[i] = new Cat();
	// 	i++;
	// }

	// arr[0]->setAllIdeas("I am the first dog");
	// arr[1]->setAllIdeas("I am the second dog");
	// arr[2]->setAllIdeas("I am the third dog");
	// arr[3]->setAllIdeas("I am the fourth dog");
	// arr[4]->setAllIdeas("I am the fifth dog");
	// arr[5]->setAllIdeas("I am the first cat");
	// arr[6]->setAllIdeas("I am the second cat");
	// arr[7]->setAllIdeas("I am the third cat");
	// arr[8]->setAllIdeas("I am the fourth cat");
	// arr[9]->setAllIdeas("I am the fifth cat");

	// arr[0]->printIdeas();
	// arr[1]->printIdeas();
	// arr[2]->printIdeas();
	// arr[3]->printIdeas();
	// arr[4]->printIdeas();
	// arr[5]->printIdeas();
	// arr[6]->printIdeas();
	// arr[7]->printIdeas();
	// arr[8]->printIdeas();
	// arr[9]->printIdeas();

	// i = 0;
	// while(i < 10)
	// {
	// 	delete arr[i];
	// 	i++;
	// }

	return ( 0 );
}