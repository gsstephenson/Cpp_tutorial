// Address : &<name>
// Format : <datatype>* <name> = <address>;
#include <iostream>

int main() {
    int num = 5;

    int* numPointer = &num;   
    
    std::cout << "Value of num: " << num << "\n";
    std::cout << "Adress of num: " << numPointer << "\n";

    *numPointer = 10;
    std::cout << "Value of Num: " << num << "\n";
    std::cout << "Adress of num: " << numPointer << "\n";
}