#include <iostream>
#include "Subscriber.h"
#include "News.h"
#include "WebNews.h"
int main()
{
    Subscriber sub1("FF","16");
    WebNews strona;
    strona.attach(&sub1);
    News nowynews("Przyszedł nowy news");
    strona.AddNews(&nowynews);
    return 0;

}