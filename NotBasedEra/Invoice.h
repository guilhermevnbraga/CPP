class Invoice {
    public:
        Invoice ( string indentr, int quantity, int price );
        void setIndentifier( string indentr );
        string getIndentifier();
        void setItemQuantity( int quantity );
        int getItemQuantity();
        void setItemPrice( int price );
        int getItemPrice();
        int getInvoiceAmount();
    private:
        string indentifier;
        int itemQuantity;
        int itemPrice;
};
