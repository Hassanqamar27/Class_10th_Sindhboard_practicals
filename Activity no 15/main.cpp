#include <iostream>
using namespace std;
int main() {
	int number;
	cout << "\n\n\t\t\t\t CHECK WHETHER THE NUMBER IS POSITIVE , NEGATIVE OR ZERO \n";
	cout << "\t\t\t\t===============================================================\n";
	cout << "\t\t\t\t\t\t Enter a number : ";
	cin >> number;
	if(number > 0)
	{
		cout << "\n\n\t\t\t\t\t\t The Number is Positive.";
	}
	else if(number < 0)
	{
		cout << "\n\n\t\t\t\t\t\t The Number is Negative.\n\n";
	}
	else {
		cout << "\n\n\t\t\t\t\t\t The Number is Zero.\n\n";
	}
	return 0;
}
