#include <iostream>
using namespace std;
int main(){
	float km, meter, cent;
	cout << "\n\n\t\t\t CONVERT CENTIMETER INTO METER AND KILOMETER \n";
	cout << "\t\t=============================================================\n\n";
	cout << "\t\t\t Enter the value in centimeter : ";
	cin >>cent;
	meter = (cent / 100);
	km = (cent/100000);
	cout << "\n\n\t\t The value in meter is : "<< meter<<"\n\n";
	cout << "\n\n\t\t The value in kilometer is : "<< km<<"\n\n";
	
	return 0;
}
