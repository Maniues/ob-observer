#include <string>
#include "News.h"
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
