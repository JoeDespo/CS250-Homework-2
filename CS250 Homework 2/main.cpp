// Inheritance: Academic Enviornment (CS 250: HW2)
// Created by: Joseph D'Esposito
// Last updated: 10/10/23
//
//  This program implements a system for an academic institution.
//  It implements a data structure for students and professors (subclasses) with use
//  of the superclass called "Person" to store the name property. The subclass
//  "Student" keeps track of up to 10 courses they are taking. The subclass "Professor"
//  keeps track of their office location.

#include <iostream>
#include "Person.hpp"
#include "Student.hpp"
#include "Professor.hpp"

using namespace std;

int main()
{
    //Test the created classes
    //Person Class
    Person Bill("Bill gATES");
    cout << Bill.getName() << endl;
    Bill.setName("Bill Gates");
    cout << Bill.getName() << endl;
    
    //Professor Class
    Professor Steve("Steve Jobs", "Rm. 100");
    cout << Steve.getName() << "'s Office is " << Steve.getOffice() << endl;
    
    //Student Class
    string courses[5] = {"CS 100", "CS 250", "CS 301", "CS 302", "Math 308"};
    Student Joe("Joseph D'Esposito", courses, 5);
    cout << Joe.getName() << " is taking " << Joe.getCourses() << endl;

    //Extra Credit
    Joe.addCourse("CS 101");
    cout << Joe.getName() << " is taking " << Joe.getCourses() << endl;
    Joe.removeCourse("CS 250");
    cout << Joe.getName() << " is taking " << Joe.getCourses() << endl;
    
    return 0;
}
