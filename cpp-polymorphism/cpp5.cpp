#include <iostream>
using namespace std;

/*
	@desc: polymorphism means "many forms", occurs when we have many classes that are related to each other by inheritance
	i.e having many classes that inherites from the same parent class
	@NB: why and when to use "inheritance" and polymorphism? :
		->> 1. code reusability
		->> 2. to reuse attributes and methods of an existing Class when creating a new class
*/

// Base class (Parent)
class Animal
{
	public:
		void AnimalSound(){
			cout << "the Animals makes a sound! \n";
		}
};

//Child Class (Derivared from parent class)

class Pig: public Animal
{
	public: 
		void AnimalSound()
		{
			cout << "Pig says: wee wee! \n";
		}
};

// Onather child class (Derivared from parent class)
class Dog: public Animal
{
	public:
		void AnimalSound(){
			cout << "Dog says: bow bow! \n";
		}
};

int main()
{
	Animal myAnimal;
	Pig myPig;
	Dog myDog;

	myAnimal.AnimalSound();
	myPig.AnimalSound();
	myDog.AnimalSound();

	return (0);
}