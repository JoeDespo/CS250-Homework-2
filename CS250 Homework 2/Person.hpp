//
//  Person.hpp
//  CS250 Homework 2
//
//  Created by Joseph D'Esposito on 10/9/23.
//

#ifndef Person_hpp
#define Person_hpp

#include <string>
#include <stdio.h>
using namespace std;

class Person
{
private:
protected:
    string m_name; //Person's name
public:
    Person();
    Person(string);
    string getName();
    void setName(string);
};


#endif /* Person_hpp */
