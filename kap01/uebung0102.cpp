/**
 * This program is able to solve Uebung 1.2 (p. 64).
 **/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

const unsigned long long int ULONG_LONG_INT = ~0L;
const unsigned long int ULONG_INT = ~0;
const unsigned int UINT = ~0;
const long int LONG_INT = (long int) (ULONG_INT>>1);
const int INT = (int) (UINT>>1);

int main(){
	cout << "Groesste unsigned long long int:" << endl;
	cout << ULONG_LONG_INT << endl;
	
	cout << "Groesste unsigned long int:" << endl;
	cout << ULONG_INT << endl;
	
	cout << "Groesste unsigned int:" << endl;
	cout << UINT << endl;
	
	cout << "Groesste long int:" << endl;
	cout << LONG_INT << endl;
	
	cout << "Groesste int:" << endl;
	cout << INT << endl;
	
	system("pause");
}