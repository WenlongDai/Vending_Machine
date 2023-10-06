#include "Beverage.h"
#include "Alcohol.h"
#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>

class VendingMachine
{
public:
	VendingMachine(); 
    void serve();
    
	vector<Beverage*> arr;

    int num, times;

    void pause();

	void Show_interface();
	
	void Interface();
	void Choose_product();
	void Adult_checking();
	void Payment();
	double given_money,total_money,return_money,more_money;
	void Recharger();
	
private:
	
};
