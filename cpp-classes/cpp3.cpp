#include <iostream>
using namespace std;
// Object-Oriented Programming

class MyClass 
{
	public:
		int myNum;
		string myString;
};

class Car{
	public:
		string brand;
		string model;
		int year;
};

class methodClass
{
	public:
		void myMethod(){
			cout << "class method inside a class!\n";
		}
};
class MyClass3
{
	public:
		void myMethod1();
};

void MyClass3::myMethod1()
{
	cout << "class method defined outside the class!\n";
}

class parmClass
{
	public:
		int speed(int maxSpeed);
};
int parmClass::speed(int maxSpeed)
{
	return maxSpeed;
}

class parmClass2
{
	public:
		int sum(int a, int b);
};
int parmClass2::sum(int a, int b)
{
	return (a + b);
}
int main()
{
	MyClass myObj;
	Car carObj1;
	Car carObj2;
	methodClass obj1;
	MyClass3 obj2;
	parmClass parmObj;
	parmClass2 parmObj2;

	myObj.myNum = 15;
	myObj.myString = "some text";

	cout << myObj.myNum << endl;
	cout << myObj.myString << endl;

	carObj1.brand = "BMW";
	carObj1.model = "X5";
	carObj1.year = 1999;

	carObj2.brand = "Ford";
	carObj2.model = "Mustang";
	carObj2.year = 2000;

	cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
	cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";


	obj1.myMethod();
	obj2.myMethod1();
	cout << "print a number: " << parmObj.speed(200) << endl;
	cout << "sum of 2 numbers : " << parmObj2.sum(200, 100) << endl;

	return (0);
}