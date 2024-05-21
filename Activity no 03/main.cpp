#include <iostream>

using namespace std;

int main() {
    cout << "\n\n\t Size of fundamental data types in C++ (in bytes):\n";
    cout << "\t ==========================================================\n";
    cout << "\tThe Size of character is:       " << sizeof(char) <<"bytes \n";
    
    cout << "\tThe Size of integer is:         " << sizeof(int) << "bytes \n";
    cout << "\tThe Size of long is:            " << sizeof(long) << "bytes \n";
    
    cout << "\tThe Size of float is:           " << sizeof(float) << "bytes \n";
    cout << "\tThe Size of double is:          " << sizeof(double) << "bytes \n";
    
    cout << "\tThe Size of boolean is:         " << sizeof(bool) << "bytes \n";
    
    cout << "\tThe Size of short is:           " << sizeof(short) << "bytes \n";
    cout << "\tThe Size of long long is:       " << sizeof(long long) << "bytes \n";
//the size of short and long is not define in the Practical journal but i did it because it is fundamental data types
    return 0;
}


