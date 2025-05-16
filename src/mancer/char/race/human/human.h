#pragma once
#include "../race.h"

template<typename R>
class human : public race<R> {
private:
    std::string name;
    std::string decriptiopn;
    std::vector<feat> features;
    std::vector<prof> proficiencies;
public:
    human();
    ~human();

    void content(){
    }
};

template<typename R> human<R>::human(/* args */){
}

template<typename R> human<R>::~human(){
}
