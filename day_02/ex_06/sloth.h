#pragma once 

#include <iostream>
#include <string>

namespace day_02
{
    namespace ex_06
    {
        class sloth
        {
            public:
                std::string name;
                std::string get_name();

                sloth(std::string name)
                {
                    this->name = name;
                    sloth_alive();
                }
                sloth(sloth& copy)
                {
                    this->name = copy.get_name();
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
        std::ostream& operator<<(std::ostream& stream, sloth& copy);
    }
}
