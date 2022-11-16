#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

ItemToPurchase::ItemToPurchase() 
{
   m_itemName = "none";
   m_itemPrice = 0.0;
   m_itemQuantity = 0;
   
   return;
}

void ItemToPurchase::setName(string name) 
{
   m_itemName = name;
   return;
}

void ItemToPurchase::setPrice(double price) 
{
   m_itemPrice = price; 
   return;
}

void ItemToPurchase::setQuantity(int quantity) 
{
   m_itemQuantity = quantity;
   return;
}

string ItemToPurchase::getName() const 
{
   return m_itemName;
}

double ItemToPurchase::getPrice() const {
   return m_itemPrice;
}

int ItemToPurchase::getQuantity() const 
{
   return m_itemQuantity;
}
