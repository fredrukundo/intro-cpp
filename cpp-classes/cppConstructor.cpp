#include <iostream>

using namespace std;

class myClass
{
	public:
		myClass(){
			cout << "constructor testing! \n";
		}
};

// constractor parameters

class Car 
{
	public:
		string model;
		string brand;
		int year;
		Car(string x, string y, int z)
		{
			brand = x;
			model = y;
			year = z;
		}
};

int main()
{
	myClass obj;
	Car objCar("BMW","X5",1999);

	cout << objCar.brand << " " << objCar.model << " " << objCar.year << endl; 
	return (0);
}