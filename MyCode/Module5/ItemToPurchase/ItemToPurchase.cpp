#include <iostream>
#include "ItemToPurchase.h"
using namespace std;

ItemToPurchase::ItemToPurchase() 
  {
     itemName = "none";
     itemPr = 0.0;
     itemQu = 0;

    return

  } 

void ItemToPurchase::setPrice(double price) 
  {
    itemPr = price; 
    return; 

  }

void ItemToPurchase::setQuantity(int qu) 
  {
     itemQu = qu;
     return;
  }

    
string ItemToPurchase::getName() const 
  {
     return itemName;
  }

double ItemToPurchase::getPrice() const 
  {
   return itemPr;
  }

int ItemToPurchase::getQuantity() const 
  {
     return itemQu;
  }

  
  

