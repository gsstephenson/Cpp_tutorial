// <returntype> <name>() {}

#include <iostream>

int sum(int num1, int num2) {
    return (num1 + num2);
}

int main() {
    int a = 3;
    int b = 2;

    int summation = sum(a, b);

    std::cout << "The sum is " << summation << "\n";
}