#pragma once
#include "../prof.h"
#include <string>

template<typename A>
class armor : prof<P> {
public:
    /*
    Constructors
    */
    armor();
    ~armor();
    /*
    Fields
    */
        
    /*
    Methods
    */
    virtual void add(A value);
    virtual void remove();
    virtual void clear();

private:
    std::vector<A> data;
    std::string name;
    std::string content;
    bool proficienciant;
};

template<typename A> void armor<A>::add(A value){

}

template<typename A> void armor<A>::remove(){
    
}

template<typename A> void armor<A>::clear(){

}