/* Program to add user defined Items in the Grocery List*/
#include "Grocery.h"

Grocery::Grocery(int ItemNum, string Item_Name , float ItemQty, float ItemRate, double ItemAmount, double TotalAmount)
{
  newItemNum = ItemNum;
  newItem_Name = Item_Name;
  newItemQty = ItemQty;
  newItemRate = ItemRate;
  newItemAmount = ItemAmount;
  newTotalAmount = TotalAmount;
}
Grocery::~Grocery ()
{

}
int Grocery::getItemNum()
{
  return newItemNum;
}
string Grocery::getItem_Name()
{
  return newItem_Name;
}
float Grocery::getItemQty()
{
  return newItemQty;
}
float Grocery::getItemRate()
{
  return newItemRate;
}
double Grocery::getItemAmount()
{
  return newItemAmount;
}
double Grocery::getTotalAmount()
{
  return newTotalAmount;
}
void Grocery::setItemNum(int ItemNum)
{
  newItemNum = ItemNum;

}
void Grocery::setItem_Name(string Item_Name)
{
  newItem_Name = Item_Name;
}
void Grocery::setItemQty(float ItemQty)
{
  newItemQty = ItemQty;
}
void Grocery::setItemRate(float ItemRate)
{
  newItemRate = ItemRate;
}
void Grocery::setItemAmount(double ItemAmount)
{
  newItemAmount = newItemQty * newItemRate;
}
void Grocery::setTotalAmount( double TotalAmount)
{
  TotalAmount += newItemAmount;
}