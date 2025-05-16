#pragma once
#include <vector>

template<typename P>
class prof {
public:
    /*
    CONSTRUCTORS
    */
    prof(){}
    ~prof(){}

    /*
    Methods
    */
    virtual void add(P value) = 0;
    virtual void remove() = 0;
    virtual void clear() = 0;

private:
};