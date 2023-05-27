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
    
    Subscriber sub2;
    strona.attach(&sub2);
    News nowynews2("Test na dwóch subskrybentach");
    strona.AddNews(&nowynews2);
    
    strona.detach(&sub2);
    News nowynews3("Usunięto subskrybenta");
    strona.AddNews(&nowynews3);

    return 0;

}
