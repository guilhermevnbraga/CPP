class Account {
    public:
        Account( int money );
        void setBalance( int money );
        int getBalance();
        void credit( int money );
        void debit( int money );
    private:
        int balance;
};
