#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

class Invoice {
    public:
        Invoice ( string indentr, int quantity, int price ){
            setIndentifier( indentr );
            setItemQuantity( quantity );
            setItemPrice( price );
        }

        void setIndentifier( string indentr ){
            indentifier = indentr;
        }

        string getIndentifier(){
            return indentifier;
        }

        void setItemQuantity( int quantity ){
            if (quantity > 0)
                itemQuantity = quantity;
            else
                itemQuantity = 0;
        }

        int getItemQuantity(){
            return itemQuantity;
        }

        void setItemPrice( int price ){
            if (price > 0)
                itemPrice = price;
            else
                itemPrice = 0;
        }

        int getItemPrice(){
            return itemPrice;
        }

        int getInvoiceAmount(){
            return getItemQuantity() * getItemPrice();
        }

    private:
        string indentifier;
        int itemQuantity;
        int itemPrice;
};
