#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

#include "Invoice.h"

Invoice::Invoice(string indentr, int quantity, int price)
{
    setIndentifier(indentr);
    setItemQuantity(quantity);
    setItemPrice(price);
}

void Invoice::setIndentifier(string indentr)
{
    indentifier = indentr;
}

string Invoice::getIndentifier()
{
    return indentifier;
}

void Invoice::setItemQuantity(int quantity)
{
    if (quantity > 0)
        itemQuantity = quantity;
    else
        itemQuantity = 0;
}

int Invoice::getItemQuantity()
{
    return itemQuantity;
}

void Invoice::setItemPrice(int price)
{
    if (price > 0)
        itemPrice = price;
    else
        itemPrice = 0;
}

int Invoice::getItemPrice()
{
    return itemPrice;
}

int Invoice::getInvoiceAmount()
{
    return getItemQuantity() * getItemPrice();
}
