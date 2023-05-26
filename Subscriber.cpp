#include "Subscriber.h"
#include <iostream>
/*
    private:
    std::string firstname;
    std::string lastname;
    public:
    void setFirstname(std::string);
    void setLastname(std::string);

    std::string getFirstname();
    std::string getLastname();
    void update(std::string);
    Subscriber();
    Subscriber(std::string="First Name", std::string="Last Name");
    */
void Subscriber::setFirstname(std::string name)
{
    this->firstname = name;
}
void Subscriber::setLastname(std::string name)
{
    this->lastname = name;
}
std::string Subscriber::getFirstname()
{
    return this->firstname;
}
std::string Subscriber::getLastname()
{
    return this->lastname;
}
void Subscriber::update(std::string newsText)
{
    std::cout<<this->getFirstname()<<" "<<this->getLastname()<<" dowiedział się, że "<<newsText<<"\n";
}
Subscriber::Subscriber(std::string first, std::string last)
{
    this->setFirstname(first);
    this->setLastname(last);
}