#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	string line;

	ifstream myReadFile("test.txt");

	while (getline(myReadFile, line))
	{
		cout << line;
	}
	myReadFile.close();
}