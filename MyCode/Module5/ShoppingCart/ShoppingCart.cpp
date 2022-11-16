#include <iostream>
using namespace std;

#include "ShoppingCart.h"

ShoppingCart::ShoppingCart() : m_customerName("none"), m_currentDate(), m_cartItems()
{
  
}

 ShoppingCart::ShoppingCart(string name, Date date) :m_customerName(name), m_currentDate(date), m_cartItems()
{
  
}

string ShoppingCart::getCustomerName() const 
{
 return m_customerName;  
}

Date ShoppingCart::getDate() const 
{
 return  m_currentDate; 
}

void ShoppingCart::addItem(ItemToPurchase item)
{
   m_cartItems.push_back(item);
}

bool ShoppingCart:: removeItem(string item) 
{
  bool yes; 
  for(auto it = m_cartItems.begin(); it != m_cartItems.end(); it++) 
    {
      if((*it).getName() == item) 
      {
         yes = true;
         m_cartItems.erase(it);
      }
    }
      return yes; 
}

int ShoppingCart:: getNumItemsInCart() const
{
   return m_cartItems.size();
}

double ShoppingCart:: getCostOfCart() const  
{
  double price; 
  for(auto it = m_cartItems.begin(); it != m_cartItems.end(); it++) 
   {
      price += (*it).getPrice() * (*it).getQuantity();
   }
  
   return price;
}

