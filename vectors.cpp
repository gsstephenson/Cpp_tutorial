// Format : std::vector<datatype> <name> = {};

#include<iostream>
#include<vector>

int main() {
    std::vector<int> numbers = {1,2,3};
    numbers.push_back(4);
    numbers.pop_back();

    for(int i = 0; i < numbers.size(); i++) {
        std::cout << numbers[i] << "\n";
    }

}