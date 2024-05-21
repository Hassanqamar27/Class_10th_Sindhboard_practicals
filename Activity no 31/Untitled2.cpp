#include <iostream>
using namespace std;

int factorial(int number) {
    if (number == 0)
        return 1;
    else
        return number * factorial(number - 1);
}

int main() {
    int number;    
    cout << "\n\n\t\t\t\t FACTORIAL OF A NUMBER \n";
    cout << "\t\t\t==========================================================\n";
    cout << "\n\t\t Enter a Number :";
    cin >> number;
    cout << "\n\t\t Factorial of " << number<< " is : " << factorial(number) <<"\n\n";
   
    return 0;
}

