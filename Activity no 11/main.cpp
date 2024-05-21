#include <iostream>
using namespace std;

int main() {
	cout << "\n\n\t\t   SWAPS TWO NUMBERS USING TEMPORARY VARIABLES \n";
	cout << "\t\t=====================================================\n\n";
	int number1, number2, temp;
	cout << "\t\t\t Enter 1st number  : ";
	cin >> number1;
	cout << "\t\t\t Enter 2nd number  : ";
	cin >> number2;
	cout << "\n\n\t\t--------x----------x--------x--------\n\n";
	cout << " \t\tBefore Swapping the 1st number is :  "<< number1 <<"\n";
	cout << " \t\tBefore Swapping the 2nd number is :  "<< number2 <<"\n\n";
	temp = number2;
	number2 = number1;
	number1 = temp;
	cout << "\n\n\t\t--------x----------x--------x--------\n\n";
	cout << " \t\t After Swapping the 1st number is :  "<< number1 <<"\n";
	cout << " \t\t After Swapping the 2nd number is :  "<< number2 <<"\n\n";
	return 0;
}
