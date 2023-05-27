#include "Subscriber.h"
#include <iostream>
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
