/**
 * Project OOP3200-ICE3
 * @author Devanshu Dave
 * @version 1
 */

#pragma once
#ifndef _STUDENT_H
#define _STUDENT_H

#include "Person.h"
#include<string>

// class student inherits person
class Student: public Person {
public: 
    
/**
 * @param first_name
 * @param last_name
 * @param age
 * @param student_id
 */
// student constructor 
Student(const std::string& first_name, const std::string& last_name, float age, std::string student_id);
// declaration of accessor getStudentID    
std::string getStudentID() const;
    
/**
 * @param value
 */
 // declaration of mutator  setStudentID    

void setStudentID(const std::string& value);
// declaration of method Studies()
void Studies() const;
// declaration of ToString() method which overrides   

std::string ToString() override;
private:
    // declare the m_StudentID private variable with  string type.
    std::string m_studentID;

};

#endif //_STUDENT_H