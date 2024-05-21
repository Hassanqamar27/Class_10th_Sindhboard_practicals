#include <iostream>
using namespace std;
int main() {
	int height,radius;
	float vol_cyl;
	cout << "\n\n\t\t\t\t CALCULATE THE VOLUME OF A CYLINDER \n";
	cout << "\t\t\t====================================================\n";
	cout << "\t\t\t Enter the radius of a cylinder : ";
	cin >> radius;
	cout << "\t\t\t Enter the height of a cylinder : ";
	cin >> height;
	vol_cyl = (3.14*radius*radius*height);
	cout << "\n\n\t\t\t The volume of a Cylinder is : "<< vol_cyl << "\n\n\n\n";
	
	return 0;
}
