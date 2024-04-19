#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

/* Type your code here */
string ItemToPurchase::GetName(){
  return itemName;
}

int ItemToPurchase::GetPrice(){
  return itemPrice;
}

int ItemToPurchase::GetQuantity(){
  return itemQuantity;
}

