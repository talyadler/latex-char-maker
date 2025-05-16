#pragma once
#include "../feat/feat.h"
#include "../prof/prof.h"
#include <string>
#include <vector>


template<typename R> class race {
private:
    
public:
    /*
    Constructors
    */
    template<typename R> race(){};
    template<typename R> ~race(){};
    
    /*
    Fields
    */
    
    std::string name;
    std::string decriptiopn;
    std::vector<feat> features;
    std::vector<prof> proficiencies;

    /*
    Methods
    */

};
