#include "chainlink.hpp"

using namespace std;

ChainLink::ChainLink(){
    
}

string ChainLink::get_name(){
    return this->name;
};

ChainLink::ChainLink(std::string color, string name){
        this->color = color;
        this->name = name;
    }

string ChainLink::get_color(){
        return this->color;
    }
