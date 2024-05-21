#include <iostream>
using namespace std;
int main() {
	int number,i=0;
	cout << "\n\n\t\t\t\t MULTIPLES OF A NUMBER UPTO 10 \n";
	cout << "\t\t\t====================================================\n";
	cout << "\t\t\t\t Enter a number : ";
	cin >> number;
	for (i=1;i<=10;i++){
		cout << "\n\t\t\t\t"<<number<<"  x  "<< i << "  =  "<<number*i<<"\n";
	} 
	return 0;
}
