namespace day_02
{
    namespace ex_04
    {
        class sloth
        {
            public:
                static int slothNb;
                bool is_sleeping = false;
                bool is_moving = false;

                void start_moving();
                void start_sleeping();
            sloth()
            {
                slothNb++;
                sloth_alive();
                start_sleeping();
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