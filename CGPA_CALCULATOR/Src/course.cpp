#include "../include/course.hpp"

Course::Course(std::string c_n,double g_p,int c) : course_name(c_n), grade_point(g_p), credit(c) {}

std::string Course::get_course_name() const { return course_name; }

double Course::get_grade_point() const { return grade_point; }

int Course::get_credit() const { return credit; }