#ifndef SHOPPING_CART_H
#define SHOPPING_CART_H

#include <string>
#include <vector>
using namespace std;

#include "Date.h"
#include "ItemToPurchase.h"

class ShoppingCart  {
   
   public:
      ShoppingCart(); 
      ShoppingCart(string, Date);
      string getCustomerName() const;
      Date getDate() const; 

      void addItem(ItemToPurchase);
      bool removeItem(string itemName);
      int getNumItemsInCart() const;
      double getCostOfCart() const; 
      
   private:
      string m_customerName;
      Date m_currentDate;  
      vector<ItemToPurchase> m_cartItems;
};

#endif