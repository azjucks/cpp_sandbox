#include <iostream>
#include <string>

namespace day_02
{
    namespace ex_05
    {
        class sloth
        {
            public:
                static int slothNb;
                bool is_sleeping = false;
                bool is_moving = false;

                void start_moving();
                void start_sleeping();
                static int get_nb_sloth();
                std::string get_name();

                sloth(std::string name)
                {
                    this->name = name;
                    slothNb++;
                    sloth_alive();
                }
                sloth(const sloth& copy)
                {
                    this->name = copy.name;
                    slothNb++;
                    this->is_moving = copy.is_moving;
                    this->is_sleeping = copy.is_sleeping;
                    sloth_alive();
                }
                ~sloth()
                {
                    sloth_died();
                    slothNb--;
                }
            private:
                std::string name;
                void sloth_alive();
                void sloth_died();
        };
        std::ostream& operator<<(std::ostream& stream, sloth& copy);
    }
}
