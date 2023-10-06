#ifndef ALCOHOL_H
#define ALCOHOL_H
#include "Beverage.h"
#include <string>
#include <iostream>

class Alcohol : public Beverage
{	//inharitance 
public:
	Alcohol(std::string aName, double aPrice,int capacity,int aAmount);

	void askAdult(){ //virtual method use
		std::cout<<"Are you allowed to buy Alcohol?"<<std::endl;
	}
	void adultCheck();	//checking if the customer is an adult
	int adult;
	
	~Alcohol();
private:
	

};
#endif
