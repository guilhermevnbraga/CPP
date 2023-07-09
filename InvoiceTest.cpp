#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;
using std::getline;

#include "Invoice.h"

int main(){
    Invoice myInvoice("Bolina de gorfe", 32, 5000);
    string text;
    int integer;

    cout << "Initial data:\nItem indentifier: " << myInvoice.getIndentifier() << "\nItem quantity: " << myInvoice.getItemQuantity()
        << "\nItem price " << myInvoice.getItemPrice() << "\nInvoice amount: " << myInvoice.getInvoiceAmount() << endl;
    
    cout << "\nEnter the new item indentifier: ";
    getline( cin, text );
    myInvoice.setIndentifier(text);
    cout << "Enter the new item quantity: ";
    cin >> integer;
    myInvoice.setItemQuantity(integer);
    cout << "Enter the new item price: ";
    cin >> integer;
    myInvoice.setItemPrice(integer);

    cout << "\nActual data:\nItem indentifier: " << myInvoice.getIndentifier() << "\nItem quantity: " << myInvoice.getItemQuantity()
        << "\nItem price " << myInvoice.getItemPrice() << "\nInvoice amount: " << myInvoice.getInvoiceAmount() << endl;
}
