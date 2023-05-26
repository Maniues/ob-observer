#ifndef SUBSCRIBER_H
#define SUBSCRIBER_H
#include <iostream>
#include <string>
#include "News.h"
#include "Observer.h"
class Subscriber: public Observer
{
    private:
    std::string firstname;
    std::string lastname;
    public:
    void setFirstname(std::string);
    void setLastname(std::string);

    std::string getFirstname();
    std::string getLastname();
    void update(std::string);
    Subscriber(std::string="First Name", std::string="Last Name");
};
#endif