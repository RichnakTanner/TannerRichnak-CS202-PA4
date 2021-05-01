//Author: Tanner Richnak
//Date: 3/31/2021
//Purpose: Definition of the abstract Employee base class which inherits from the IPayable template and holds general data of employees

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "IPayable.h"
#include <string>

class Employee : public IPayable {
public:
	std::string position;
	std::string firstName;
	std::string lastName;
	std::string employmentStatus;
public:
	virtual std::string getEmploymentStatus() const = 0;	//Returns the employment status of the employee
	virtual std::string getPosition() const = 0;			//Returns the position of the employee
	friend std::ostream& operator << (std::ostream& os, const Employee& mn);
};

#endif
