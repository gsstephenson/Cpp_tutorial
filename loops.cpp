// While For loop
// While -> while (<condition>) {code}
// For -> for (<variableInitialization>; <condition>; <increament/decrement>)

#include <iostream>

int main() {
    std::cout << "While Loop\n\n";
    int a = 0;
    while (a <= 5) {
        std::cout << a << "\n";
        a++;
    }
    
    std::cout << "For Loop\n\n";
    for(int b = 0; b <= 5; b++) {
        std::cout << b << "\n";
        a++;
    }
}

