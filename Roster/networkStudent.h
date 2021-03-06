#pragma once
#include <string>
#include "degree.h"
#include "student.h"

class NetworkStudent : public Student {

	const Degree DEGREE_TYPE = NETWORK;

public:
	// constructors
	NetworkStudent();
	NetworkStudent(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degreeProgram);

	// overriding virtual methods
	Degree getDegreeProgram();
	void setDegreeProgram(Degree degreeProgram);
	void print();

	// deconstructor
	~NetworkStudent();
};