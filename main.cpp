//Author: Tanner Richnak
//Date: 3/31/2021
//Purpose: Driver of the employee program.  The main function opens a text file inputted in the command line and then reads the data into a vector of Employee object pointers, determining the correct subclass, either Manager or Shopworker.  The program then prints the data of the class to the terminal.

#include "IPayable.h"
#include "employee.h"
#include "manager.h"
#include "shopworker.h"
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
	
	if (argc != 2){										//Check for console arguments	
		cout << "Correct usage:" << endl << "./employee filename" << endl;
		return 0;
	}
		
	
	string filename = argv[1];							//Open file	
	ifstream inFile;
	inFile.open(filename);
	if (inFile.fail()) {
		cout << "The file " << filename << " could not be opened." << endl;
		return 0;
	}
	
	
	vector<Employee*> employees;						//Read file and fill Employee* vector
	string line;
	while (getline(inFile, line)) {
		string position, lastName, firstName, status, department, phone;
		int id, timeWorked;
		float wage;
		stringstream ss(line);
		ss >> position;
		
		if (position == "****") {     					//Skip instructions in text file
			continue;
			
		} else if (position == "Manager") {     		//Create Manager objects and add to vector
			ss >> lastName >> firstName >> status >> department >> id >> wage >> timeWorked;
			Employee* employee = new Manager(position, lastName, firstName, status, department, id, wage, timeWorked);
			employees.push_back(employee);
			
		} else if (position == "ShopWorker") {     		//Create Shopworker objects and add to vector
			ss >> lastName >> firstName >> status >> department >> phone >> id >> wage >> timeWorked;
			Employee* employee = new Shopworker(position, lastName, firstName, status, department, phone, id, wage, timeWorked);
			employees.push_back(employee);
		}
	}
	
	for (Employee *emp: employees) {						//Prints employees vector
    	if(auto * manager = dynamic_cast<Manager*>(emp)) {
       		std::cout << (*manager) << std::endl;
   		} else {
        	std::cout << *(dynamic_cast<Shopworker*>(emp)) << std::endl;
    	}
	}

    return 0;
}
