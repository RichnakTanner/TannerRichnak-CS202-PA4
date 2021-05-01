//Author: Tanner Richnak
//Date: 3/31/2021
//Purpose: Implementation of the Shopworker class

#include "shopworker.h"

Shopworker::Shopworker(std::string position, std::string lastName, std::string firstName, std::string employmentStatus, std::string department, std::string storePhone, int shopID, float hourlyRate, int hoursWorked) {
	this->position = position;
	this->lastName = lastName;
	this->firstName = firstName;
	this->employmentStatus = employmentStatus;
	this->department = department;
	this->storePhone = storePhone;
	this->shopID = shopID;
	this->hourlyRate = hourlyRate;
	this->hoursWorked = hoursWorked;
}

float Shopworker::currentPayDue() const {
	return hoursWorked * hourlyRate;
}

std::string Shopworker::getEmploymentStatus() const {
	return employmentStatus;
}

std::string Shopworker::getPosition() const {
	return position;
}

std::ostream& operator << (std::ostream& os, const Shopworker& sw) {
	os << "Shopworker: " << sw.firstName << " " << sw.lastName << std::endl << "Department: " << sw.department << std::endl << "Store Location: " << sw.shopID << std::endl << "Store Phone: " << sw.storePhone << std::endl << "Employment Status: " << sw.employmentStatus << std::endl << "Pay Due: $" << sw.currentPayDue() << std::endl;
	return os;
} 
