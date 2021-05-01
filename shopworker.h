//Author: Tanner Richnak
//Date: 3/31/2021
//Purpose: Definition of the Shopworker class, a subclass of the Employee class that holds data unique to shopworkers

#ifndef SHOPWORKER_H
#define SHOPWORKER_H

#include "employee.h"
#include <iostream>

class Shopworker : public Employee {
	std::string department;
	std::string storePhone;
	int hoursWorked;
	float hourlyRate;
	int shopID;
public:
	Shopworker(std::string position, std::string lastName, std::string firstName, std::string employmentStatus, std::string department, std::string storePhone, int shopID, float hourlyRate, int hoursWorked);
	
	float currentPayDue() const override;				//Returns the current pay due relative to the wage and time worked of the employee
	
	std::string getEmploymentStatus() const override;	//Returns the employment status of the employee
	std::string getPosition() const override;			//Returns the position of the employee
	
	friend std::ostream& operator << (std::ostream& os, const Shopworker& sw);	//Overloads the << operator to accept objects of the Shopworker class
};

#endif
