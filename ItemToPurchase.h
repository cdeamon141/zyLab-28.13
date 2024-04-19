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
ItemToPurchase(string name, int price, int quantity);
void SetName(string name);
void SetPrice(int price);
void SetQuantity(int quantity);

#endif
