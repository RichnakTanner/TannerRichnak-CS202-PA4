//Author: Tanner Richnak
//Date: 3/31/2021
//Purpose: Definition of the Manager class, a subclass of the Employee class that holds data unique to managers

#ifndef MANAGER_H
#define MANAGER_H

#include "employee.h"
#include <iostream>

class Manager : public Employee {
	std::string department;
	int storeID;
	float salaryPerDay;
	int daysWorked;
public:
	Manager(std::string position, std::string lastName, std::string firstName, std::string employmentStatus, std::string department, int storeID, float salaryPerDay, int daysWorked);
	
	float currentPayDue() const override;				//Returns the current pay due relative to the wage and time worked of the employee
	
	std::string getEmploymentStatus() const override;	//Returns the employment status of the employee
	std::string getPosition() const override;			//Returns the position of the employee
	
	friend std::ostream& operator << (std::ostream& os, const Manager& mn);	//Overloads the << operator to accept objects of the Manager class
};

#endif
