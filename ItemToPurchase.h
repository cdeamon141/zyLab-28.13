#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H

#include <string>
using namespace std;

/* Type your code here */
class ItemToPurchase{

private:
string itemName;
int itemPrice;
int itemQuantity;

public:

void SetName(string name);
void SetPrice(int price);

string GetName();
int GetPrice();
int GetQuantity();

};

#endif
