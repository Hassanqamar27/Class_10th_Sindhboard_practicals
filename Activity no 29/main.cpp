#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int num[10];
	cout << "\n\n\t\t\t\t DESCENDING SORTING \n";
	cout << "\t\t\t====================================\n";
	cout << "\t\t\t\t Enter Numbers: ";
	for (int i = 0; i <= 9; i++){
		cin >> num[i];
		cout <<"\t\t\t\t\t\t";
	}	
	sort(num, num+10);	
	cout << "\n\t\t\t===================\n\n";
		
cout << "\t\t\t"<< num[9]<<" "<< num[8]<<" "<< num[7]<<" "<< num[6]<<" "<< num[5]<<" "<< num[4]<<" "<< num[3]<<" "<< num[2]<<" "<< num[1]<<" "<< num[0]<<" ";
		
		cout << "\n\t\t\t===================";
		

	return 0;
}
