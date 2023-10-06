#ifndef BEVERAGE_H
#define BEVERAGE_H

#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Beverage
{
public:
	Beverage(string aName, double aPrice,int capacity,int aAmount);

	//Beverage *goodList;

	int num;
	string name;
	double price;
	int capa, amount;

	virtual void askAdult(){	//virtual function to ask if people is an adult
		//do not ask if it's beverage
        
	}

    virtual void adultCheck(); //to check if the age is not over 18

    // virtual void get_alcoholity();
    
	// void set_name(string aName);//set names
	// string name;

	// void set_price(double aPrice);	//set price
	// double price;

	// void set_capacity(int capacity);  //set capacity
	// int capa;

	// void set_count(int aCount); //set count
	// int count;
	

	string get_name(); //print name

	double get_price(); // print price

	int get_ID();	// print ID
	static int currentID ; //static 
	int myID;

	int get_capacity();	//print capacity

	int get_amount(); //print count




	// void record_goods(string goods); //store all goods
	// vector<string> aGoods; 
	

	// vector<string> get_rec_goods(); // get recorded goods

	// int numberOfGoods(); //print the number of goods

	// int get_total_stock_count();	//get the current count
	// int cur_am;

	//void addBeverage();	//add more Beverage

	// int payment();
	// int given_money,return_money;

	
	// ~Beverage();
	
private:
	
	
};
#endif
