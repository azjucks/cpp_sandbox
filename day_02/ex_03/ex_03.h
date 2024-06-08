namespace day_02
{
    namespace ex_03
    {
        class sloth
        {
            public:
                static int slothNb;
            sloth()
            {
                slothNb++;
                sloth_alive();
            }
            ~sloth()
            {
                sloth_died();
                slothNb--;
            }
            private:
                void sloth_alive();
                void sloth_died();
        };
    }
}