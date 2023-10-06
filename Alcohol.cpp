#include "Alcohol.h"



Alcohol::Alcohol(string aName, double aPrice,int capacity,int aAmount):Beverage (aName,aPrice,capacity,aAmount){

}

// void Alcohol::set_alcoholity(int a_alcoholity){	//set the alcoholity
// 	alco = 0.0;
// 	alco = a_alcoholity;
	
// }


//  void Alcohol::get_alcoholity(){	//calculate the alcoholity of the alcohol
// 	alco = (alco/10) * (capa/100);	
// 	return alco;
// 	}

void Alcohol::adultCheck(){	//checking if the customer is an adult
	cout<<"if you are an adult, press 1 ; otherwise ,press 0"<<endl;
	adult = 0;
	cin>>adult;

	if(adult == 1){
		cout<<"You are allowed to buy Alcohol"<<endl;
	}else{
		cout<<"Sorry, you can't buy Alcohol"<<endl;
		cout<<"Thank you"<<endl;
		exit(0);
	}
}



// bool Alcohol::addBeverage(Beverage beer){
// 	if(cur_am<6){
// 		Al[cur_am]=beer;
// 		cur_am++;
// 		return 1;
// 	}else{
// 		return 0;
// 	}
// }



Alcohol::~Alcohol(){

}
