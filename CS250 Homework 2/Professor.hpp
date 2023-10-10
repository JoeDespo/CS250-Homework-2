//
//  Professor.hpp
//  CS250 Homework 2
//
//  Created by Joseph D'Esposito on 10/9/23.
//

#ifndef Professor_hpp
#define Professor_hpp

#include <string>
#include <stdio.h>
#include "Person.hpp"
using namespace std;

class Professor : public Person
{
private:
    string m_office; //Office location
public:
    Professor(string, string);
    string getOffice();
    void setOffice(string);
};

#endif /* Professor_hpp */
