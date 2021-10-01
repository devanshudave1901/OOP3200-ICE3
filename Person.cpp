/**
 * Project OOP3200-ICE3
 * @author Devanshu Dave
 * @version 1
 */

#include "Person.h"


#include <iostream>

/**
 * Person implementation section
 */

// implementation (defination) of Person constructor
Person::Person(std::string first_name, std::string last_name, const float age)
	:m_age(age) , m_firstName(std::move(first_name)), m_lastName(std::move(last_name))
{

}


// defination of accesor getAge which returns m_age
float Person::getAge() const
{
    // eturns m_age
    return m_age;
}


// defination of mutator setAge which set the m_age to the value
void Person::setAge(const float value) {
    m_age = value;
}

/**
 * @return std::string
 */

/// <summary>
/// defination  accesor getFirstName which returns the m_firstName
/// </summary>
/// <returns></returns>
std::string Person::getFirstName() const
{
    return m_firstName;
}

/**
 * @param value
 */
// defination of mutator setFirstName. whichsets the m_firstName to value
void Person::setFirstName(const std::string& value) {
    m_firstName = value;
}

/**
 * @return std::string
 */

// defination of accesor getLastName which returns m_lastName
std::string Person::getLastName() const
{
    return m_lastName;
}

/**
 * @param value
 *
 */
// defination of mutator setLastName which sets m_lastName to the value
void Person::setLastName(const std::string& value) {
    m_lastName = value;
}

/**
 * @return void
 */
// defination of SaysHello() function which prints the first name and says hello
void Person::SaysHello() const
{
    std::cout << getFirstName() << " Says Hello!!" << std::endl;
}

// defination of ToString()
std::string Person::ToString()
{
    std::string output_string;

    output_string += "---------------------------------------------------------\n";
    output_string += "First Name : " + getFirstName() + "\n";
    output_string += "Last Name  : " + getLastName() + "\n";
    output_string += "Age         :" + std::to_string(getAge()) + "\n";
    output_string += "---------------------------------------------------------\n";

    return output_string;
}

/**
 * @return std::string
 */
