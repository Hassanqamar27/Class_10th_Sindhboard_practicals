#include <iostream>
using namespace std;
int main() {
	float fh, kelvin;
	cout << "\n\n\t\t\t CONVERT TEMPERATURE FROM KELVIN TO FARHENHEIT \n";
	cout << "\t\t==============================================================\n\n";
	cout << "\t\t Enter the value in Kelvin : ";
	cin >> kelvin;
	fh = (9.0/5)*(kelvin - 273.15)+ 32;
	cout << "\n\n\t\t The value in Kelvin is : "<<kelvin<<"\n\n";
	cout << "\t\t The value in Farhenheit is : "<<fh<<"\n\n";
	return 0;
}
