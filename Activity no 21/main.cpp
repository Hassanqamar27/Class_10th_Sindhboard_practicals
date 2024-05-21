#include <iostream>
using namespace std;
int main() {
	float fh, cel;
	cout << "\n\n\t\t\t CONVERT TEMPERATURE FROM FARHENHEIT TO CELSIUS \n";
	cout << "\t\t==============================================================\n\n";
	cout << "\t\t Enter the value in Farhenheit : ";
	cin >> fh;
	cel = ((fh*5.0)-(5.0*32))/9;
	cout << "\n\n\t\t The value in Farhenheit is : "<<fh<<"\n\n";
	cout << "\t\t The value of celsius is : "<<cel<<"\n\n";
	return 0;
}
