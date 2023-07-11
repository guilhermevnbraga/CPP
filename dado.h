class dado
{
    public:
        dado(unsigned sed);
        void setSeed(unsigned sed);
        int getSeed();
        int rolarDado();
    private:
        unsigned seed = 0;
};
