#include <iostream>
using namespace std;
int main() {
	int radius;
	float vol_sp;
	cout << "\n\n\t\t\t\t CALCULATE THE VOLUME OF A SPHERE \n";
	cout << "\t\t\t===================================================\n";
	cout << "\t\t\t Enter the radius of a sphere : ";
	cin >> radius;
	vol_sp = (4*3.14*radius*radius*radius)/3;
	cout << "\n\n\t\t\t The volume of a sphere is : "<< vol_sp <<"\n\n\n\n";
	
	return 0;
}
