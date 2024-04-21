#include <iostream>

class ChainLink{
    std::string color;
    std::string name;

    public:
    ChainLink();
    ChainLink(std::string color, std::string name);

    std::string get_color();
    std::string get_name();

};
