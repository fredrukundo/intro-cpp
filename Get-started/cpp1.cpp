#include <iostream>

using namespace std;



int main()
{
	// variable and constants in C++
	int i = 13;
	double n = 5.055;
	char sex = 'M';
	string name = "fred";
	bool isBoy = true;
	const float pi = 3.14;
	cout << "cpp Quickstart\n";
	cout << "Welcome to the C++ world" << endl;
	cout << "hello my name is " << name << " and i use iphone " << i << " for "<< n << " months "<<" sex: "<< sex << " are you a boy? "<< isBoy <<endl;
	cout << "constant variable: " << pi << endl;
	//User Input in C++
	int x;
	cout << "type a number: ";
	cin >> x;
	cout << "your number is: " << x << endl;
	string prenom;
	cout << "what's your name Sir? ";
	cin >> prenom;
	cout << "hello " << prenom << endl;

	//strings
	string noms;
	string firstN = "Duke";
	string lastN = "Fred";
	noms = firstN.append(lastN);
	cout << noms << endl;
	cout << "the length of the name is: " << noms.length() << endl;
	cout << "character on 7th position of noms: "<< noms[6] << endl;
	//Arrays
	string cars[4] = {"volvo", "BMW", "Ford", "Mazda"};
	cout << sizeof(cars) << endl;
	cout << sizeof(string) << endl;
	// for(int i = 0; i < 4; i++)
	// {
	// 	cout <<"cars" << "[" << i << "]" << ": " << cars[i] << endl;
	// }
	int j = 0;
	while (j < 4)
	{
		cout <<"cars" << "[" << j << "]" << ": " << cars[j] << endl;
		j++;
	}
	// C++ structure
	struct
	{
		int myNum;
		string myString;
	} myStructure;
	myStructure.myNum = 1;
	myStructure.myString = "hello i'm using C++ struct";
	cout << myStructure.myNum << endl;
	cout << myStructure.myString << endl;

	return 0;
}