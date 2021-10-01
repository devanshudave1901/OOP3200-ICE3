/**
 * Project OOP3200-ICE3
 * @author Devanshu Dave
 * @version 1
 */


#include "Student.h"

#include <iostream>

/**
 * Student implementation
 */


/**
 * @param first_name
 * @param last_name
 * @param age
 * @param student_id
 */
// defination of the student constructor
Student::Student(const std::string& first_name, const std::string& last_name, const float age,std::string student_id)
 :Person(first_name,last_name,age), m_studentID(std::move(student_id))
{

}

/**
 * @return std::string
 */
// defination of the accesor getStudentID() which returns m_studentID
std::string Student::getStudentID() const
{
    return m_studentID;
}

/**
 * @param value
 */
// defination of the mutator setStudentID which sets the m_studentID equal to value
void Student::setStudentID(const std::string& value) {
    m_studentID = value;
}

/**
 * @return void
 */
// defination of Studies() function which prints the statement. 
void Student::Studies() const {
    std::cout << getFirstName() << " is Studying " << std::endl;
}

/**
 * @return std::string
 */
// defination of ToString method
std::string Student::ToString() {

    // prints the statements 
    std::string output_string;

    // building the string
    output_string += Person::ToString();

    output_string += "---------------------------------------------------------\n";
    output_string += "Student ID : " + getStudentID() + "\n";
    output_string += "---------------------------------------------------------\n";
    // returning string
	return output_string;
}