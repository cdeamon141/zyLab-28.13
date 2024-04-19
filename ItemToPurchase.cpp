#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

/* Type your code here */













ItemToPurchase::ItemToPurchase(string name = "none", int price = 0, int quantity = 0){
itemName = name;
itemPrice = price;
itemQuantity = quantity;
}

void ItemToPurchase::SetName(string name){
itemName = name;
}


void ItemToPurchase::SetPrice(int price){
itemPrice = price;
}

void ItemToPurchase::SetQuantity(int quantity){
  itemQuantity = quantity;
}
