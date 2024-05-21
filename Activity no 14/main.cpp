#include <iostream>
using namespace std;
int main() {
	cout << "\n\n\t\t     CALCULATE THE TOTAL AND AVERAGE OF SIX NUMBERS \n";
	cout << "\t\t============================================================================\n\n";
	int number1,number2,number3,number4,number5,number6,total;
	float avg;
	cout << "\t\t\t\t Enter 1st number : ";
	cin >> number1;
	cout << "\t\t\t\t Enter 2nd number : ";
	cin >> number2;
	cout << "\t\t\t\t Enter 3rd number : ";
	cin >> number3;
	cout << "\t\t\t\t Enter 4th number : ";
	cin >> number4;
	cout << "\t\t\t\t Enter 5th number : ";
	cin >> number5;
	cout << "\t\t\t\t Enter 6th number : ";
	cin >> number6;
	cout <<"\n\n\t\t\t\t--------x----------x--------x--------x--------\n\n";
	total = number1 + number2 + number3 + number4 + number5 + number6;
	cout << "\t\t\t\t The Total is equal to : "<< total <<"\n";
	avg = total / 6;
	cout << "\t\t\t\t The Average is equal to : "<< avg <<"\n\n\n";
	return 0;
}
