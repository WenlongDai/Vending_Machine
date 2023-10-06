#include "Beverage.h"
#include "Alcohol.h"
#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include "VendingMachine.h"

int main(){
    
    //system("clear");
    VendingMachine vendingmachine;
    vendingmachine. Show_interface();
    
    vendingmachine.Choose_product();
    vendingmachine.Adult_checking();
    vendingmachine.Payment();
    vendingmachine.Recharger();;
	
}
