#include <iostream>
#include <string>

#include "sloth.h"
namespace day_02
{
    namespace ex_06
    {
        class cat
        {
            public:
                std::string name;
                std::string get_name();
                cat(std::string name)
                {
                    this->name = name;
                    cat_alive();
                }
                cat(const cat& copy)
                {
                    this->name = copy.name;
                    cat_alive();
                }
                cat(const sloth& copy)
                {
                    this->name = copy.name;
                    cat_alive();
                }
                ~cat()
                {
                    cat_died();
                }
                cat& operator=(const sloth& copy)
                {
                    this->name = copy.name;
                    return *this;
                }
            private:
                void cat_alive();
                void cat_died();
        };
        std::ostream& operator<<(std::ostream& stream, cat& copy);
    }
}
