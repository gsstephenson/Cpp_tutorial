#include <iostream>
#include <string>

int main() {
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;

    std::string info;
    if (name == "Julianna") {
        std::cout << "Enter your Birth Year: ";
        std::cin >> info;
        if (info == "2003") {
            std::cout << "Enter your Middle Name: ";
            std::cin >> info;
            if (info == "Danielle") {
                std::cout << "Welcome, Julianna!\n";
            } else {
                std::cout << "That isn't her middle name!\n";
            }
        } else {
            std::cout << "That isn't her birth year!\n";
        }
    } else if (name == "Courtney") {
        std::cout << "Enter your birth year: ";
        std::cin >> info;
        if (info == "1970") {
            std::cout << "Enter your Middle Name: ";
            std::cin >> info;
            if (info == "Dana") {
                std::cout << "Welcome, Courtney!\n";
            } else {
                std::cout << "That isn't her middle name!\n";
            }
        } else {
            std::cout << "That isn't her birth year!\n";
        }
    } else if (name == "George") {
        std::cout << "Enter your Birth Year: ";
        std::cin >> info;
        if (info == "2000") {
            std::cout << "Enter your Middle Name: ";
            std::cin >> info;
            if (info == "Stephen") {
                std::cout << "Welcome, George!\n";
            } else {
                std::cout << "That isn't his middle name!\n";
            }
        } else {
            std::cout << "That isn't his birth year!\n";
        }
    } else if (name == "Stephen") {
        std::cout << "Enter your birth year: ";
        std::cin >> info;
        if (info == "1965") {
            std::cout << "Enter your Middle Name: ";
            std::cin >> info;
            if (info == "Stephen") {
                std::cout << "Welcome, Stephen!\n";
            } else {
                std::cout << "That isn't his middle name!\n";
            }
        } else {
            std::cout << "That isn't his birth year!\n";
        }
    } else if (name == "Ty") {
        std::cout << "Enter your birth year: ";
        std::cin >> info;
        if (info == "2003") {
            std::cout << "Enter your Middle Name: ";
            std::cin >> info;
            if (info == "Alan") {
                std::cout << "Is Julianna cool? (yes/no) : ";
                std::cin >> info;
                if (info == "yes") {
                    std::cout << "Welcome, Ty!\n";
                } else {
                    std::cout << "You ain't Ty!! \n";
                }
            } else {
                std::cout << "That isn't his middle name!\n";
            }
        } else {
            std::cout << "That isn't his birth year!\n";
            std::cout << "You ain't Ty!! \n";
        }
    } else if (name == "Dean") {
        std::cout << "Enter your birth year: ";
        std::cin >> info;
        if (info == "2001") {
            std::cout << "What did we name our future enterprise as kids? : ";
            std::cin >> info;
            if (info == "DAG" || info == "dag" || info == "Dag" || info == "D.A.G." || info == "D.A.G") {
                std::cout << "Welcome, Dean!\n";
            } else {
                std::cout << "You are not him... GO AWAY!\n";
            }
        } else {
            std::cout << "That isn't his birth year!\n";
        }
    } else if (name == "Alex" || name == "Alexandra" || name == "Chooch") {
        std::cout << "Enter your Birth Year: ";
        std::cin >> info;
        if (info == "2004") {
            std::cout << "Where did you go to College? : ";
            std::cin >> info;
            if (info == "Denver" || info == "denver" || info == "DU" || info == "du" || info == "Denver University"|| info == "University of Denver") {
                std::cout << "Welcome, Chooch!\n";
            } else {
                std::cout << "That isn't her college name!\n";
            }
        } else {
            std::cout << "That isn't her birth year!\n";
        }
    } else if (name == "Jonathan" || name == "JSM" || name == "jonathan") {
        std::cout << "Where did you attend Law School? : ";
        std::cin >> info;
        if (info == "Tulane") {
            std::cout << "Who is your most devious cat? : ";
            std::cin >> info;
            if (info == "Jack" || info == "jackpot" || info == "jack") {
                std::cout << "Welcome, Jonathan!\n";
            } else {
                std::cout << "That isn't his most devious cat!\n";
            }
        } else {
            std::cout << "That isn't his Law School!\n";
        }
    } else if (name == "Yuly" || name == "Georgia" || name == "Thea") {
        std::cout << "Enter your Birth Year: ";
        std::cin >> info;
        if (info == "1970") {
            std::cout << "Enter your Middle Name: ";
            std::cin >> info;
            if (info == "Marie") {
                std::cout << "Welcome, Mom!\n";
            } else {
                std::cout << "That isn't her middle name!\n";
            }
        } else {
            std::cout << "That isn't her birth year!\n";
        }
    } else {
        std::cout << "You Are Not Family! You don't even know our names!\n";
    }
    return 0;
}