//Author: Tanner Richnak
//Date: 3/31/2021
//Purpose: Implementation of the Manager class

#include "manager.h"

Manager::Manager(std::string position, std::string lastName, std::string firstName, std::string employmentStatus, std::string department, int storeID, float salaryPerDay, int daysWorked) {
	this->position = position;
	this->lastName = lastName;
	this->firstName = firstName;
	this->employmentStatus = employmentStatus;
	this->department = department;
	this->storeID = storeID;
	this->salaryPerDay = salaryPerDay;
	this->daysWorked = daysWorked;
}

float Manager::currentPayDue() const{
	return salaryPerDay * daysWorked;
}

std::string Manager::getEmploymentStatus() const {
	return employmentStatus;
}

std::string Manager::getPosition() const {
	return position;
}

std::ostream& operator<<(std::ostream& os, const Manager& mn) {
	os << "Manager: " << mn.firstName << " " << mn.lastName << std::endl << "Department: " << mn.department << std::endl << "Store Location: " << mn.storeID << std::endl << "Employment Status: " << mn.employmentStatus << std::endl << "Pay Due: $" << mn.currentPayDue() << std::endl;
	return os;
}
