#include <iostream>
using namespace std;
/*
	@desc: when executing C++ program, different error can occur.
		so C++ will normally stop and generate an error message, so the technical term is that:
			C++ throw an `exception` (throw error)
	@exception-handling: consist of three keywords `Try` `throw` and `catch`
*/
int main()
{
	
	try{
		int age = 22;
		if(age >= 20)
			cout << "Access granted. -> you're old enough!\n";
		else
			throw (age);
	}
	catch(int myNum)
	{
		cout << "Access denied. -> too young\n";
		cout << myNum << endl;
	}
	

	return (0);
}
