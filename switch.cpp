// Format : switch (<variable>) {case "" case "" default}

#include <iostream> 

int main() {
    int number = 1;

    switch(number) {
        case 1:
            std::cout << "The number is one\n";
            break;
        case 2: 
            std::cout << "The number is two\n";
            break;
        case 3:
            std::cout << "The number is three\n";
            break;
        default: 
            std::cout << "Out of bound\n";
    }
}