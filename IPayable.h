//Author: Tanner Richnak
//Date: 3/31/2021
//Purpose: Definition of the IPayable interface which is applied to classes that can be paid money

#ifndef IPAYABLE_H
#define IPAYABLE_H

class IPayable {
public:
	virtual float currentPayDue() const = 0;	//Returns the current pay due of the object
};

#endif
