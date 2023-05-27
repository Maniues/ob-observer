#include "WebNews.h"
void WebNews::AddNews(News* news)
{
    this->news.push_back(news);
    this->notify();
}
void WebNews::notify()
{
    for (auto it = this->subs.begin(); it!=this->subs.end(); it++)
    {
        std::string newsToSend = (*(this->news.rbegin()))->getMessage();
        (*it)->update(newsToSend);
    }
}
void WebNews::attach(void* arg)
{
    Subscriber* newsub = reinterpret_cast<Subscriber*>(arg);
    // Check if subscriber already exist
    for (auto it = this->subs.begin(); it!=this->subs.end(); it++)
    {
        if (*it == newsub) return;
    }
    // if not, attach it
    this->subs.push_back(newsub);
}
void WebNews::detach(void* arg)
{
    Subscriber* sub = reinterpret_cast<Subscriber*>(arg);
    for (auto it = this->subs.begin(); it!=this->subs.end(); it++)
        {
            if (*it == sub)
            {
                this->subs.erase(it);
                return;
            }
    }
}
