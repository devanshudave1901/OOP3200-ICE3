
#include <iostream>
#include <vector>

//#include "Person.h"
#include "Professor.h"
#include "Student.h"

int main()
{
	

	//Person person = Person("Bob", "Smith", 35.5f);
	//
	//person.SaysHello();
	//std::cout << person.ToString() << std::endl;

	Student student = Student ("Mike", "Johns", 22.0f , "MJ123456");
	student.SaysHello();
	student.Studies();

	std::cout << student.ToString() << std::endl;

	Professor professor = Professor("Tom", "Tsilipoulos", 30.0f, "TT23456789");
	professor.SaysHello();
	professor.Teaches();

	std::cout << professor.ToString() << std::endl;
	std::vector<Person*> people;

	people.push_back(new Professor("Alvaro", "Quevedo", 32.0f, "ABC4555"));

	people[0]->SaysHello();

	std::cout << people[0]->ToString() << std::endl;

	people.push_back((new Student("Nick", "Smith", 20.0f, "AB343452454")));
	people[1]->SaysHello();
	std::cout << people[1]->ToString() << std::endl;




}

