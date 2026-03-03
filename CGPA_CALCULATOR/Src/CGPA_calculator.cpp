#include "../include/CGPA_calculator.hpp"

CGPA_Calculator::CGPA_Calculator() : total_quality_points(0.0), total_credits(0) {}

void CGPA_Calculator::add_course(std::string n,double g,int c) {
    courses.push_back(Course(n,g,c));
    total_quality_points += (g * c);
    total_credits += c;
}

double CGPA_Calculator::calculate_CGPA() const {
    if(total_credits == 0) return 0.0;

    return total_quality_points / total_credits;
}

void  CGPA_Calculator::display_report() const {
    std::cout << "\n----------Academic Report Card----------" << std::endl;
    std::cout << std::left << std::setw(10) << "Course" << std::setw(10) << "Grade" 
    << std::setw(10) << "Credits" << std::endl;
    std::cout << "-----------------------------" << std::endl;

    for(const auto& course : courses) {
        std::cout << std::setw(10) << course.get_course_name() 
        << std::setw(10) << course.get_grade_point() << std::setw(10) << course.get_credit()
        << "\n";
    }

    std::cout << "------------------------------" << std::endl;
    std::cout << "Total Credits: " << total_credits << std::endl;
    std::cout << "Final CGPA: " << std::fixed << std::setprecision(2) << calculate_CGPA() << std::endl;
}