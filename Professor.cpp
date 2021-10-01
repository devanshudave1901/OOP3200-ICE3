/**
 * Project OOP3200-ICE3
 * @author Devanshu Dave
 * @version 1
 */


#include "Professor.h"

#include <iostream>
#include <utility>
/**
 * Professor implementation
 */


/**
 * @param first_name
 * @param last_name
 * @param age
 * @param employee_id
 */
// constructor defination which inherits from person class
Professor::Professor(const std::string& first_name,const std::string& last_name, const float age, std::string employee_id)
	:Person(first_name,last_name,age),m_employeeID(std::move((employee_id)))
{

}

/**
 * @return std::string
 */
// defination of thee getEmployeeID() with string which returns m_enployeeID
std::string Professor::getEmployeeID() const
{
    return m_employeeID;
}

/**
 * @param value
 */
 // defination of thee setEmployeeID() with string which sets m_employeeID to the value
void Professor::setEmployeeID(const std::string& value) {
    m_employeeID = value;
}

/**
 * @return void
 */
// defination of the Teaches method which prints the statement what prof is teaching
void Professor::Teaches() const
{
    std::cout << getFirstName() << " is teaching \n";
}

/**
 * @return std::string
 */
// defination of the ToString() method
std::string Professor::ToString() {
    std::string output_string;

    // building the string
    output_string += Person::ToString();

    output_string += "---------------------------------------------------------\n";
    output_string += "Employee ID : " + getEmployeeID() + "\n";
    output_string += "---------------------------------------------------------\n";
    // returns string
    return output_string;
}