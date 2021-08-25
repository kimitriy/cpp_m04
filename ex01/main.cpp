#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int		main()
{
	Animal *arr[10];
	int i = 0;

	while(i < 10)
	{
		if (i < 5)
			arr[i] = new Dog();
		else
			arr[i] = new Cat();
		i++;
	}

	arr[0]->setAllIdeas("I am dog and first");
	arr[1]->setAllIdeas("I am dog and second");
	arr[2]->setAllIdeas("I am dog and third");
	arr[3]->setAllIdeas("I am dog and fourth");
	arr[4]->setAllIdeas("I am dog and fifth");
	arr[5]->setAllIdeas("I am cat and sixth");
	arr[6]->setAllIdeas("I am cat and seventh");
	arr[7]->setAllIdeas("I am cat and eighth");
	arr[8]->setAllIdeas("I am cat and ninth");
	arr[9]->setAllIdeas("I am cat and tenth");

	arr[0]->printIdeas();
	arr[1]->printIdeas();
	arr[2]->printIdeas();
	arr[3]->printIdeas();
	arr[4]->printIdeas();
	arr[5]->printIdeas();
	arr[6]->printIdeas();
	arr[7]->printIdeas();
	arr[8]->printIdeas();
	arr[9]->printIdeas();

	i = 0;
	while(i < 10)
	{
		delete arr[i];
		i++;
	}

	return ( 0 );
}