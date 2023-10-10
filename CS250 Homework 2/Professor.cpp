//
//  Professor.cpp
//  CS250 Homework 2
//
//  Created by Joseph D'Esposito on 10/9/23.
//

#include "Professor.hpp"
#include <string>

//Professor constructor, takes their name and office location
Professor::Professor(string name, string office)
{
    m_name = name;
    m_office = office;
}

//This function returns the office location
string Professor::getOffice()
{
    return m_office;
}

//This function sets the office location
void Professor::setOffice(string office)
{
    m_office = office;
}
