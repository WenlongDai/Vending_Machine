#include "Welcome.h"

Welcome::Welcome(){
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
	
	
	

void Welcome::serve(){
    Show_interface();
    Choose_product();
    Adult_checking();
    Payment();
    Recharger();
}

void Welcome::Interface(){
	cout<<"ID"<<" "<<"Name"<<" "<<"Price"<<" "<<"Capacity"<<" "<<"Amount"<<endl;
	for(int i = 0;i<arr.size();i++){	//show basic infomations 
		cout << arr[i]->get_ID() << " " << arr[i]->get_name() << "	 " << arr[i]->get_price() 
		<<"	 "<<arr[i]->get_capacity()<< "	 " <<arr[i]->get_amount()<<endl;
	}
}

void Welcome::Show_interface(){
	int interface_num;
	cout<<"\n"<<endl;
	 	cout << "::::::::::::::::::::::::::::::::::::::::::" << endl;
        cout << "WELCOME TO THE BEVERAGE VENDING MACHINE!" << endl;
       	cout << "Choose your option:\n0.Exit\n1.View Items"<<endl;
	cin>>interface_num;
	switch(interface_num){
		case 1:
			Interface();
			break;
		case 0:
			cout<<"Thank you!"<<endl;
			exit(0);
			break;
	}
}

void Welcome::Choose_product(){
	string strNum;  
	//input the total num of XXX  
	cout << "Please input the product ID :    "<<endl;  
	cin >> strNum;  
	num = atoi(strNum.c_str());  //tranform the string to an integer
	cout<<"NUMBER: "<<num<<" "<<strNum<<endl;
	while (!(num >= 1 && num <= arr.size())){
		cout<<"INVALID"<<endl;
		cout << "Please input the product ID again:    "<<endl; 
		cin >> strNum;
		num = atoi(strNum.c_str());
	}

	if(num <= arr.size()){
	 	cout <<"No." <<arr[num-1]->get_ID() << " " << arr[num-1]->get_name() << " " << arr[num-1]->get_price() << endl;
    } else {
        cout << "Product ID does not exist. "<<endl;
        cout<<"-----------------------------------"<<endl;
       
    }
}

void Welcome ::Adult_checking(){
	//To check if customer buy any Alcohol
	//if(num == 4||num==5){
		arr[num-1]->askAdult();
		//cout<<"-----------------------------"<<endl;
	    arr[num-1]->adultCheck();
	//}
}
void Welcome ::Payment(){
	int count;
	cout<<"-----------------------------"<<endl;
	cout<<"How many items do you want?"<<endl;
	cin>>count;
	
		
    total_money = count * arr[num-1]->get_price();	//calculate the price
	

	cout<<"The total price is: "<<total_money<<endl; 
	cout<<"------------------"<<endl;
	cout<<"Please pay here:		"<<endl;
	cin>>given_money;
}

void Welcome ::Recharger(){

	if(given_money>total_money){	//calculate the recharge
		return_money = given_money - total_money;
		cout<<"Your recharge is: "<<return_money<<"\n"<<"Thank you!"<<endl;
	}else if(given_money==total_money){
		return_money = given_money - total_money;
		cout<<"Thank you!"<<endl;
	}else{
		more_money = abs(total_money - given_money);
		cout<<"The cash is not enough,you still need "<<more_money<<endl;
	}
    
    
	/*If the given money is less than the total money?*/
	while(given_money<total_money){
		cout<<"Please pay the enough money here:	"<<endl;
		cin>>more_money;
		given_money += more_money;
		if(given_money>=total_money){
			break;
		}
		more_money = abs(total_money - given_money);
		cout<<"The cash is not enough,you still need "<<more_money<<endl;
		cout<<"-------------------------------------------"<<endl;

	}
    cout << "Transaction completed" << endl;
}



