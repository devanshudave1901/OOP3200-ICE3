/**
 * Project OOP3200-ICE3
 * @author Devanshu Dave
 * @version 1
 */
#pragma once
#ifndef _PERSON_H
#define _PERSON_H

#include <string>
/*
 * Class - Person
 *
 */
 
// class person has been declared here
class Person {
// public
public: 
    
// declaring person parameter
Person(std::string first_name, std::string last_name, float age);

// declare getAge() accesor with float data type
float getAge() const;
    

// declaring mutator(setAge)
void setAge(float value);

// declaring accesor getFirstName with string data type
std::string getFirstName() const;
    
// declaring mutator setFirtName.
void setFirstName(const std::string& value);

// declaring the getLastName accessor as string data type
std::string getLastName() const;
    
// declaring setLastName mutator
void setLastName(const std::string& value);

// declaring SaysHello function
void SaysHello() const;

 // declring ToString method
virtual std::string ToString();
// private	
private:
    // declared m_age variable as a float data type in private
    float m_age;
    // declared m_firstName variable as string type in private
    std::string m_firstName;
    // declared m_lastName as string type in privte variable
    std::string m_lastName;
};

#endif //_PERSON_H