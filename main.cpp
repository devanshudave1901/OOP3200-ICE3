//Name - Devanshu Dave
// Type - ice 3
// Date - 01-10-2021.
// Description - 

// included files for iostream and vector
#include <iostream>
#include <vector>
//included header files.
#include "Person.h"
#include "Professor.h"
#include "Student.h"


// main
int main()
{
	// execution part
	// Person class with object adn assigning the values and prints the function which has been called saysHello()
	Person person = Person("Adam", "Roy", 30.5f);
	person.SaysHello();
	std::cout << person.ToString() << std::endl;

	// execution of student class with object by assigning the values and calling the 2 methods (sayshello()) and studies()
	Student student = Student ("Nike", "Dave", 22.0f , "MJ123456");
	student.SaysHello();
	student.Studies();

	std::cout << student.ToString() << std::endl;
	// execution of professor class with object by assigning the values and calling the 2 methods
	Professor professor = Professor("Tom", "Tsilipoulos", 30.0f, "TT23456789");
	professor.SaysHello();
	professor.Teaches();

	std::cout << professor.ToString() << std::endl;
	/* Done with Dynamic Memory Allocation */
	std::vector<Person*> people;
	// pushback 
	people.push_back(new Professor("Sukhwant", "Sagar", 34.0f, "ABC4555"));
	// says hello is called
	people[0]->SaysHello();
	// prints
	std::cout << people[0]->ToString() << std::endl;
	// pushback
	people.push_back((new Student("Devanshu", "Dave", 20.0f, "AB343452454")));
	// says hello function
	people[1]->SaysHello();
	// prints;
	std::cout << people[1]->ToString() << std::endl;




}

