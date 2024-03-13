#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	// create and open a file
	ofstream myFile("test.txt");

	// write to the file
	myFile << "Hello this is the introduction to the C++ files! added texts";

	myFile.close();

	return (0);
}