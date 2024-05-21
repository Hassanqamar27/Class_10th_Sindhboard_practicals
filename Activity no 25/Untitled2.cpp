#include <iostream>
using namespace std;
int main() {
	float cel,kelvin;
	cout << "\n\n\t\t\t CONVERT TEMPERATURE FROM CELSIUS TO KELVIN \n";
	cout << "\t\t==============================================================\n\n";
	cout << "\t\t Enter the value in celsius : ";
	cin >> cel;
	kelvin = cel + 273.15;
	cout << "\n\n\t\t The value in Celsius is : "<<cel<<"\n\n";
	cout << "\t\t The value in kelvin is : "<<kelvin<<"\n\n";
	return 0;
}
