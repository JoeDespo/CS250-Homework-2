//
//  Person.cpp
//  CS250 Homework 2
//
//  Created by Joseph D'Esposito on 10/9/23.
//

#include "Person.hpp"

Person::Person()
{
    //default constructor
}

Person::Person(string name) //Person constructor takes their name as a parameter
{
    m_name = name;
}

//This function returns the name of the person
string Person::getName()
{
    return m_name;
}

//This function will set the name of the person
void Person::setName(string name)
{
    m_name = name;
}
