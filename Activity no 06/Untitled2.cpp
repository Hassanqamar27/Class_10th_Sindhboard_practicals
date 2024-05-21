#include <iostream>
#include <conio.h>

using namespace std;

int main() {

    cout << "\n\t\t\t Enter 10 characters \n ";
    cout << "\n\t\t=====================================\n";
	char op[10];
    for (int i = 0; i < 10; i++) {
    	cout <<"\t\t";
        op[i] = getch();
        cout <<" "<< op[i] <<"\t\t\n\n";
    }

    return 0;
}

