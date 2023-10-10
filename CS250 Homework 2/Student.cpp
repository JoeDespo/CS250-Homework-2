//
//  Student.cpp
//  CS250 Homework 2
//
//  Created by Joseph D'Esposito on 10/9/23.
//

#include <string>
#include "Student.hpp"
#include <iostream>
using namespace std;
//Student constructor takes their name, array of courses <=10, and course size.
Student::Student(string name, string courses[], int size)
{
    m_name = name;
    m_taking = size;
    
    for (int i = 0; i < 10; i++)
    {
        m_courses[i] = courses[i];
    }
}

//This function takes the array of courses and returns it as a string
string Student::getCourses()
{
    string courseList = "Courses: ";
    for (int i = 0; i < m_taking; i++)
    {
        //Loop through the array, using string concatenation to make one string of courses.
        if (i < (m_taking - 1))
        {
            courseList = courseList + m_courses[i] + ", ";
        }
        else
        {
            courseList = courseList + m_courses[i] + ". ";
        }
    }
    return courseList;
}

//This function adds a course to the array
void Student::addCourse(string course)
{
    m_taking +=1; //Updates the number of courses taking
    m_courses[m_taking-1] = course; //Add the new course to the array
}

//This function removes a course from the array
void Student::removeCourse(string course)
{
    string newCourses[m_taking-1]; //Placeholder array
    int arrayCounter = 0; //Counter for the placeholder array
    for (int i = 0; i < m_taking; i++)
    {
        //If the course being removed is in the m_courses array we skip the iteration
        //that would add the courses to the place holder course array.
        if (m_courses[i] == course)
        {
            continue;
        }
        //Add the kept courses to the place holder array. Since the iteration skips
        //the code below if the course is in m_courses, we are unable to use
        //"i" for both arrays. Instead we have a seperate counter, "arrayCounter"
        //for the place holder array.
        newCourses[arrayCounter] = m_courses[i];
        arrayCounter += 1;
    }
    m_taking -= 1; //Updates the number of courses taking
    //Replace m_courses with the placeholder array that contains the updated course
    for (int i = 0; i < m_taking; i++)
    {
        m_courses[i] = newCourses[i];
    }
}

