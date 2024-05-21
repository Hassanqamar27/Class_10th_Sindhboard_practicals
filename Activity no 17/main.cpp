#include <iostream>
using namespace std;
int main() {
	int side;
	float vol_cube;
	cout << "\n\n\t\t\t\t CALCULATE THE VOLUME OF A CUBE \n";
	cout << "\t\t\t====================================================\n";
	cout << "\t\t\t Enter the side of a Cube : ";
	cin >> side;
	vol_cube = (side*side*side);
	cout << "\n\n\t\t\t The volume of a Cube is : "<< vol_cube << "\n\n\n\n";
	
	return 0;
}
