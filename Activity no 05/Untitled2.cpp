#include <iostream>
using namespace std;

int main() {
    int math, english, urdu, computer, science, total, percent;
    cout << "\n\n\t\t\t\t    CALCULATE TOTAL, PERCENTAGE AND GRADES \n";
    cout << "\t\t=========================================================================\n\n";
 
     cout << "\t\t\t\t Enter marks obtained in Math : ";
    cin >> math;
    
    cout << "\t\t\t\t Enter marks obtained in English : ";
    cin >> english;

    cout << "\t\t\t\t Enter marks obtained in Urdu : ";
    cin >> urdu;
    
    cout << "\t\t\t\t Enter marks obtained in Computer : ";
    cin >> computer;
    
    cout << "\t\t\t\t Enter marks obtained in Science : ";
    cin >> science;

	cout << "\n\n\t\t\t\t--------x--------x--------x--------x--------\n\n";
	cout << "(Each subject carry 100 Marks )\n\n";
	
	total = math + english + urdu + computer + science;
	cout << "The total is equal to  : "<< total<<"\n";
	percent = total * 100 / 500;
	cout << "The percentage is equal to  : "<< percent<<"%\n\n\n";
    char grade;
    if (percent >= 33 && percent <=40 )  {
    	cout << "\t\t\t\tThe Grade is equal to E \n\n\n ";
    }else if (percent >= 41 && percent <=50 )  {
    	cout << "\t\t\t\tThe Grade is equal to D \n\n\n ";
    }else if (percent >= 51 && percent <=60 )  {
    	cout << "\t\t\t\tThe Grade is equal to C \n\n\n ";
    }else if (percent >= 61 && percent <=70 )  {
    	cout << "\t\t\t\tThe Grade is equal to B \n\n\n ";
    }else if (percent >= 71 && percent <=80 )  {
    	cout << "\t\t\t\tThe Grade is equal to A \n\n\n ";
    }else if (percent >= 80 && percent <=100 )  {
    	cout << "\t\t\t\tThe Grade is equal to A1 \n\n\n ";
    }else {
    	cout << "\t\t\t\t Out of Range \n\n\n";
	}
    return 0;
}

