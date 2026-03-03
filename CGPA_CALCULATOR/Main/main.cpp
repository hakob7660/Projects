#include "../include/course.hpp"
#include "../include/CGPA_calculator.hpp"

int main() {
    CGPA_Calculator calculator;
    int count;

    std::cout << "How many courses do you chose? ";
    std::cin >> count;

    for(int i = 0; i < count; ++i) {
        std::string name;
        double grade;
        int credit;

        std::cout << "Enter details for course\n" << i + 1 << "\n";
        std::cout << "Name: ";
        std::cin.ignore();
        getline(std::cin,name);
        std::cout << "Grade (0.0-4.0): ";
        std::cin >> grade;
        std::cout << "Credits: ";
        std::cin >> credit;

        calculator.add_course(name,grade,credit);
    }

    calculator.display_report();

    return 0;
}