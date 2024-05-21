#include <iostream>
using namespace std;

int main() {
	int number = 10;
	cout <<"\n\n\t\t PRE-INCREMENT AND POST-INCREMENT\n";
	cout << "================================================================\n\n";	
	cout << "\n\t\t The original Number = "<< number <<"\n\n";
	cout << "\t-------x----------x----------x-------\n";
	cout << "\t\t Result of Post-Increment \n";
	cout << "\t\t ---------------------";
	//--------------------------------(post-increment)-------------------------------------------
	cout <<"\n\t\t The Number is : "<< number++ <<"\n\n\n";
	cout << "\t-------x----------x----------x-------\n";
	cout << "\t\t Result of Pre-Increment \n";
	cout << "\t\t ---------------------";
	number = 10; //--------re-initialize to 10
	//--------------------------------(pre-increment)-------------------------------------------
	cout <<"\n\t\t The Number is : "<< ++number <<"\n\n\n\n";
	
	return 0;
}
