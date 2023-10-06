#include "Alcohol.h"

int main(){
	
	
		/* NAME DEBUGING*/
	{
		Alcohol A1("A1",1.1,375,5);
		if(A1.get_name() != "A1"){
		cout << "test A1-name failed" << endl;
		}
	}
	
	{
		Alcohol A1("A1",1.1,375,5);
		if(A1.get_name() != "A1"){
		cout << "test A2-name failed" << endl;
		}
	}
		
	{
		Alcohol A1("A1",1.1,375,5);
		if(A1.get_name() != "A1"){
		cout << "test A3-name failed" << endl;
		}
	}
		


		/* PRICE DEBUGING*/
	{ //positive test
		Alcohol A1("A1",1.1,375,5);
		if(A1.get_price() != 1.1){
		cout << "test A1-price-positive failed" << endl;
		}
	}

	{ //Zero test
		Alcohol A1("A1",0,375,5);
		if(A1.get_price() != 0){
		cout << "test A1-price-zero failed" << endl;
		}

	}
	
	{ //negative test
		Alcohol A1("A1",-1,375,5);
		if(A1.get_price() != -1){
		cout << "test A1-price-negative failed" << endl;
		}
	}



		/* CAPACITY DEBUGING*/

	{	// positive test
		Alcohol A1("A1",1.1,375,5);
		if(A1.get_capacity() != 375){
		cout << "test A1-capacity-positive failed" << endl;
		}
    }	

    {	// zero test
    	Alcohol A1("A1",1.1,0,5);
		if(A1.get_capacity() != 0){
		cout << "test A1-capacity-zero failed" << endl;
		}
    }	

    {	// negative test
    	Alcohol A1("A1",1.1,-10,5);
		if(A1.get_capacity() != -10){
		cout << "test A1-capacity-negative failed" << endl;
		}
    }	


    	/* AMOUNT DEBUGING*/
	{ // positive test
		Alcohol A1("A1",1.1,375,5);
		if(A1.get_amount() != 5){
		cout << "test A1-amount failed" << endl;
		}
	}	

	{ // zero test
		Alcohol A1("A1",1.1,375,0);
		if(A1.get_amount() != 0){
		cout << "test A1-amount failed" << endl;
		}
	}

	{	// negative test
		Alcohol A1("A1",1.1,375,-6);
		if(A1.get_amount() != -6){
		cout << "test A1-amount failed" << endl;
		}
	}
		

	
	


	



}