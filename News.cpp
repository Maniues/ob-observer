#include <string>
#include "News.h"
/*
    public:
    std::string message;
    News();
    News(std::string);
    std::string getMessage();
    void setMessage();
*/
News::News()
{
    this->setMessage("NULL");
}
News::News(std::string text)
{
    this->setMessage(text);
}
void News::setMessage(std::string text)
{
    this->message = text;
}
std::string News::getMessage()
{
    return this->message;
}