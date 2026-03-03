#ifndef CGPA_CALCULATOR_CPP
#define CGPA_CALCULATOR_CPP

#include <vector>
#include <iomanip>
#include <iostream>
#include "course.hpp"

class CGPA_Calculator {
private:
        std::vector<Course> courses;
        double total_quality_points;
        int total_credits;
public:
        CGPA_Calculator();
        
        void add_course(std::string name,double grade,int credit);

        double calculate_CGPA() const;

        void display_report() const;
};

#endif