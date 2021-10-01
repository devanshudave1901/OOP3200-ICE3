/**
 * Project OOP3200-ICE3
 * @author Devanshu Dave
 * @version 1
 */

#pragma once
#ifndef _PROFESSOR_H
#define _PROFESSOR_H
// included files
#include "Person.h"
#include <string>
// class declaration this class inherits from person class
class Professor: public Person {
public: 
    
/**
 * @param first_name
 * @param last_name
 * @param age
 * @param employee_id
 */
// declaration of the Professor Constructor
Professor(const std::string& first_name, const std::string& last_name, float age, std::string employee_id);
// declaration of thee getEmployeeID() with string 
std::string getEmployeeID() const;
    
/**
 * @param value
 */
 // declaration of thee setEmployeeID() with string 
void setEmployeeID(const std::string& value);
// declaration of the Teaches() method
void Teaches() const;
 // declaration of the ToString method which overrides   
std::string ToString() override;
private:
    // declard m_employeeID as a string in a private.
    std::string m_employeeID;
};

#endif //_PROFESSOR_H