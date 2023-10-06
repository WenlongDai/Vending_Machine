#include "VendingMachine.h"
#include <stdlib.h>
#include <unistd.h>
// #include <math.h>
// #include "Beverage.h"
// #include "Alcohol.h"
// #include <iostream>
// #include <vector>
// #include <stdio.h>

VendingMachine::VendingMachine(){
    Beverage *coke = new Beverage("Coke",3.3,375,5);
    Beverage *sprit = new Beverage("Sprit",4.4,375,5);
    Beverage *fenta = new Beverage("Fenta",5.5,375,5);

    Alcohol *beer = new Alcohol("Beer",6.6,375,5);
    Alcohol *wine = new  Alcohol("Wine",7.7,375,5);
    
    arr.push_back(coke);
    arr.push_back(sprit);
    arr.push_back(fenta);
    arr.push_back(beer);
    arr.push_back(wine);
}
	
	
	
/*combanation of the machine */
void VendingMachine::serve(){
    Show_interface();
    Choose_product();
    Adult_checking();
    Payment();
    Recharger();
}



/* */
void VendingMachine::Interface(){
	cout<<"ID"<<" "<<"Name"<<" "<<"Price"<<" "<<"Capacity"<<" "<<"Amount"<<endl;
	for(int i = 0;i<arr.size();i++){	//show basic infomations 
		cout << arr[i]->get_ID() << " " << arr[i]->get_name() << "	 " << arr[i]->get_price() 
		<<"	 "<<arr[i]->get_capacity()<< "	 " <<arr[i]->get_amount()<<endl;
	}
}
/* */
void VendingMachine::Show_interface(){ // show the interface
	int interface_num;
 	cout << "::::::::::::::::::::::::::::::::::::::::::::" << endl;
    cout << ": WELCOME TO THE BEVERAGE VENDING MACHINE! :" << endl;
   	cout << ":::::::::::: Choose your option ::::::::::::" << endl;
   	cout << "::::::::::::::::: 0.Exit :::::::::::::::::::" << endl;
   	cout <<	"::::::::::::: 1.View Items :::::::::::::::::"<< endl;
   	cout<<"\nPlease choose the option here: "<<endl;
	cin>>interface_num;
	
	switch(interface_num){ 
		case 1:
			Interface();
			break;

		case 0:
			cout<<"Thank you!"<<endl;
			exit(0);
			break;

		default:
			cout << "Please enter the vaild number!" <<endl;
			cout << "================================" <<endl;
			Show_interface();

	}
}
/* */
void VendingMachine::Choose_product(){ //Choosing the products
	string strNum;  
	//input the total num of XXX  
	cout << "========================================" <<endl;
	cout << "Please input the product ID :    "<<endl;  
	cin >> strNum;  
	num = atoi(strNum.c_str());  //tranform the string to an integer
	
	while (!(num >= 1 && num <= arr.size())){ 
		cout<<"INVALID"<<endl;
		cout << "Please input the product ID again:    "<<endl; 
		cin >> strNum;
		num = atoi(strNum.c_str()); //tranform the string to an integer
	}

	if(num <= arr.size()){
	 	cout <<"No." <<arr[num-1]->get_ID() << " " << arr[num-1]->get_name() << " " << arr[num-1]->get_price() << endl;
    } else {
        cout << "Product ID does not exist. "<<endl;
        cout<< "========================================" <<endl;
       
    }

}
/* */
void VendingMachine ::Adult_checking(){ //Check if the user is an adult
	arr[num-1]->askAdult();
    arr[num-1]->adultCheck();
}
/* ask for checkout */
void VendingMachine ::Payment(){	
	int count;
	cout<< "========================================" <<endl;
	cout<<"How many items do you want?"<<endl;
	cin>>count;
	
		
    total_money = count * arr[num-1]->get_price();	//calculate the price
	

	cout<<"The total price is: "<<total_money<<endl; 
	cout<< "========================================" <<endl;
	cout<<"Please pay here:		"<<endl;
	cin>>given_money;
}
/* get the return form the machine */
void VendingMachine ::Recharger(){ 

	if(given_money>total_money){	//calculate the recharge
		return_money = given_money - total_money;
		
		cout<<"Your recharge is: "<<return_money<<endl;
		cout<< "Transaction completed" <<"\n"<<"========Please take the items========"<<endl;
	
	}else if(given_money==total_money){
		return_money = given_money - total_money;
		
		cout<< "Transaction completed" <<"\n"<<"========Please take the items========"<<endl;
	}else{
		more_money = abs(total_money - given_money);
		cout<<"The cash is not enough,you still need $"<<more_money<<endl;
	}
    
    
	/*If the given money is less than the total money?*/
	while(given_money<total_money){
		cout<<"Please pay the enough money here: "<<endl;
		cin>>more_money;
		given_money += more_money;
		if(given_money > total_money){
			return_money = given_money - total_money;
			
			cout<<"Your recharge is: "<<return_money<<endl;
			cout << "Transaction completed" <<"\n"<<"========Please take the items========"<<endl;
			break;
		}
		more_money = abs(total_money - given_money);
		cout<<"The cash is not enough,you still need $"<<more_money<<endl;
		
		
	}
}



