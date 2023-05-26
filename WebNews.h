#ifndef WEBNEWS_H
#define WEBNEWS_H
#include <vector>
#include <string>
#include "Subscriber.h"
#include "Observer.h"
#include "News.h"

class WebNews: public Observable
{
    std::vector<News*> news;
    std::vector<Subscriber*> subs;
    void notify();
    public:
    void AddNews(News*);
    void attach(void*);
    void detach(void*);

};
#endif