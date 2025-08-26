// Format : if (<condition>) {} else {}

#include <iostream>

int main () {
    int temp = 9;

    if (temp < 10) {
        std::cout << "Cold\n";
    }
    else {
        std::cout << "Not Cold \n";
    }
}