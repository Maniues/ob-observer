#ifndef OBSERVER_H
#define OBSERVER_H
#include "Subscriber.h"
class Observer
{
    public:
    virtual void update(std::string) = 0;
};
class Observable
{
    public: 
    virtual void attach(void*) = 0;
    virtual void detach(void*) = 0;
    protected:
    virtual void notify() = 0;
};
#endif