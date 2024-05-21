#include <iostream>
using namespace std;
int main() {
	float fh,kelvin;
	cout << "\n\n\t\t\t CONVERT TEMPERATURE FROM FAHRENHEIT TO KELVIN \n";
	cout << "\t\t==============================================================\n\n";
	cout << "\t\t Enter the value in fahrenheit : ";
	cin >> fh;
	kelvin = (5.0 / 9) * (fh - 32) + 273.15;
	cout << "\n\n\t\t The value in Fahrenheit is : "<<fh<<"\n\n";
	cout << "\t\t The value of kelvin is : "<<kelvin<<"\n\n";
	return 0;
}
