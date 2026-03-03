#ifndef COURSE_CPP
#define COURSE_CPP

#include <string>

class Course {
private:
        std::string course_name;
        double grade_point;
        int credit;
public:
        Course(std::string c_n,double g_p,int c);

        std::string get_course_name() const;

        double get_grade_point() const;

        int get_credit() const;
};

#endif