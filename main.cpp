/* Main Program */
#include <iostream>
#include <string>
#include <vector>
#include "Grocery.h"

using namespace std;

void fillVector( vector<Grocery>&);
// fill vector - fill in the grocery Items
//@param vector<Grocery>& -  Grocery items purchased

void printVector( vector <Grocery>&);
//prints the information of all the items
//@param const vector<Grocery>& - Grocery item list

int main()
{
    vector<Grocery>myShop;
    fillVector(myShop);
    printVector(myShop);
        
    return 0;
}
void fillVector (vector<Grocery>& newMyShop)
{
    int ItemNum;
    string Item_Name;
    float ItemQty;
    float ItemRate;
    double ItemAmount;
    double TotalAmount;
    cout <<"How Many items you Want to buy? ";
    int ItemSize;
    cin >> ItemSize;
    for (int i = 0; i < ItemSize; ++i)
    {
        cout <<"Enter Item Number:  ";
        cin >> ItemNum;
        cout << "Enter Name of the Item:  ";
        cin >> Item_Name;
        cout << "Enter Quantity of the Item:  ";
        cin >> ItemQty;
        cout << "Enter rate of the Item:  ";
        cin >> ItemRate;
        ItemAmount = ItemQty * ItemRate;
        TotalAmount +=ItemAmount;
        Grocery newGrocery(ItemNum, Item_Name, ItemQty, ItemRate, ItemAmount, TotalAmount);
        newMyShop.push_back(newGrocery);
        cout << endl;
    }
    cout << endl;
}
void printVector(vector<Grocery>& newMyShop)
{
    unsigned int size = newMyShop.size();

    for (unsigned int i = 0; i < size; ++i)
    {
        cout <<"Item Number:  "<< newMyShop[i].getItemNum() << endl;
        cout <<"Item Item_Name:  "<< newMyShop[i].getItem_Name() << endl;
        cout <<"Item Quantity:  " << newMyShop[i].getItemQty() << endl;
        cout <<"Item Rate:  "<< newMyShop[i].getItemRate() << endl;
        cout <<"Item Amount: "<< newMyShop[i].getItemAmount() << endl;
        cout <<"Please Pay Rupees: "<< newMyShop[i].getTotalAmount() <<endl;
        cout << endl;
    }
    

}