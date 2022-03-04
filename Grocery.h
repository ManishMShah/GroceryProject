//Header file
#ifndef GROCERY_H
#define GROCERY_H
#include<iostream>
#include<string>
using namespace std;

class Grocery {
public:
    //default constructor
    Grocery();
    //overloading constuctor
    Grocery(int ItemNum, string Item_Name, float ItemRate,float ItemQty, double ItemAmount, double TotalAmount);
    //destructor
    ~Grocery();
    //accessor function
    int getItemNum();
    //get Item number
    //@return int Item Number
    string getItem_Name();
    // get Item Item_Name
    //@return string Item Item_Name
    float getItemQty();
    // get Item quantity
    //@return float Item quantity
    float getItemRate();
    // get Rate of the item
    //@return float rate 
    double getItemAmount();
    // amont of the item purchased
    //@return ItemQty * ItemRate = Amount
    double getTotalAmount();
    // total amount of the Item Purchased
    //@return TotalAmount += ItemAmount

    //mutator function
    void setItemNum(int);
    //set Item Number
    //@param int - item number

    void setItem_Name(string);
    //set Item Item_Name
    //@param string - Item_Name of an item

    void setItemQty(float);
    //set Item quantity
    //@param float - quantity of an item

    void setItemRate(float);
    //set Item Rate
    //@Param float - Rate of an item

    void setItemAmount(double);
    //set total amount
    //@param double - ItemQty * ItemRAte = Total Amount
    void setTotalAmount(double);
    //Set Total Amount
    //@param double - total Amount =+ Item Amount

private:
    //member variables
    int newItemNum;
    string newItem_Name;
    float newItemQty;
    float newItemRate;
    double newItemAmount;
    double newTotalAmount;


};
#endif

