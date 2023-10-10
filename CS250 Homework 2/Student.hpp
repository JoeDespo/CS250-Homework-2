//
//  Student.hpp
//  CS250 Homework 2
//
//  Created by Joseph D'Esposito on 10/9/23.
//

#ifndef Student_hpp
#define Student_hpp

#include <string>
#include <stdio.h>
#include "Person.hpp"
using namespace std;

class Student : public Person
{
private:
    int m_taking; //number of courses the student is taking
    string m_courses[10]; //list of courses up to 10
public:
    Student(string, string[], int);
    string getCourses();
    void removeCourse(string);
    void addCourse(string);
};

#endif /* Student_hpp */
