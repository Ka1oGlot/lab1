#include <iostream>
#include <string>
using namespace std;


int main()
{
	string a;
	cout << "Enter the name: ";
	getline(cin, a);
	cout << "Hello " << a + "!\n";
	return 0;
}
