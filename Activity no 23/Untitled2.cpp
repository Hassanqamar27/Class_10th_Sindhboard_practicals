#include <iostream>
using namespace std;
int main() {
	float Kelvin, cel;
	cout << "\n\n\t\t\t CONVERT TEMPERATURE FROM KELVIN TO CELSIUS \n";
	cout << "\t\t==============================================================\n\n";
	cout << "\t\t Enter the value in Kelvin : ";
	cin >> Kelvin;
	cel = Kelvin-273.15;
	cout << "\n\n\t\t The value in Kelvin is : "<<Kelvin<<"\n\n";
	cout << "\t\t The value of celsius is : "<<cel<<"\n\n";
	return 0;
}
