namespace day_02
{
    namespace ex_02
    {
        class sloth
        {
            public:

            sloth()
            {
                sloth_alive();
            }
            ~sloth()
            {
                sloth_died();
            }
            private:
                void sloth_alive();
                void sloth_died();
        };
    }
}