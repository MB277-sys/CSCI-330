#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H

#include <string>
using namespace std;

class ItemToPurchase {
   
   public:
      ItemToPurchase();      
      void setName(string name);
      void setPrice(double price);
      void setQuantity(int quantity);
      
      string getName() const;
      double getPrice() const;
      int getQuantity() const;   
   
   private:
      string m_itemName;
      double m_itemPrice;
      int m_itemQuantity;
};

#endif