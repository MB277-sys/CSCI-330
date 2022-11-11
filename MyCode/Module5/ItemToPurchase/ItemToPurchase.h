#ifndef POINTER_H
#define POINTER_H

#include <fstream>
#include <algorithm>
#include <vector>
using namespace std; 


class ItemToPurchase {

   private:
      string itemName;
      double itemPr;
      int itemQu;


   public:
      ItemToPurchase();      
      void setName(string name);
      void setPrice(double price);
      void setQuantity(int quantity);
      
      string getName() const;
      double getPrice() const;
      int getQuantity() const;   
   
};

#endif
