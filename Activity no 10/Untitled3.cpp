#include <iostream>
using namespace std;

int main() {
	int number = 10;
	cout <<"\n\n\t\t PRE-DECREMENT AND POST-DECREMENT\n";
	cout << "================================================================\n\n";	
	cout << "\n\t\t The original Number = "<< number <<"\n\n";
	cout << "\t-------x----------x----------x-------\n";
	cout << "\t\t Result of Post-Decrement \n";
	cout << "\t\t ---------------------";
	//--------------------------------(post-decrement)-------------------------------------------
	cout <<"\n\t\t The Number is : "<< number-- <<"\n\n\n";
	cout << "\t-------x----------x----------x-------\n";
	cout << "\t\t Result of Pre-Decrement \n";
	cout << "\t\t ---------------------";
	number = 10; //--------re-initialize to 10
	//--------------------------------(pre-decrement)-------------------------------------------
	cout <<"\n\t\t The Number is : "<< --number <<"\n\n\n\n";
	
	return 0;
}
