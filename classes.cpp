// Blueprint -> Class
// Cars --> Objects
// Format : class <name> {} <classname> <name> 

#include <iostream>

class City {

public:
    std::string name;
    int population;
    void getName() {
        std::cout << "City name: " << name << "\n";
    }
    void getPop() {
        std::cout << "Population: " << population << "\n";   
    }
};        


int main() {
    City addis;
    addis.name  = "Addis Ababa";
    addis.population = 5000000;

    addis.getName();
    addis.getPop();
}