#include <iostream>
using namespace std;

class Vehicle
{
	public:
		string brand;
		void honk(){
			cout << "tuut tuut!\n";
		}
};

class Car: public Vehicle
{
	public:
		string model;
};

int main()
{
	// class object, using a method from parent class
	Car objcar;
	objcar.honk();
	objcar.brand = "Ford";
	cout << "brand from parent class using a child class: " << objcar.brand << endl;
}