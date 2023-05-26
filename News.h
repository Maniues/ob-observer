#ifndef NEWS_H
#define NEWS_H
#include <string>
class News
{
    public:
    std::string message;
    News();
    News(std::string);
    std::string getMessage();
    void setMessage(std::string);

};
#endif