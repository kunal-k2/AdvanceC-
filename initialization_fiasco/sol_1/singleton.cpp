#include "singleton.h"
#include "dog.h"
#include "cat.h"

Dog* Singleton::pd = 0;
Cat* Singleton::pc = 0;

Cat* Singleton::getCat()
{
    if(!pc) pc = new Cat("xyz");
    return pc;
}

Dog* Singleton::getDog()
{
    if(!pd) pd = new Dog("abc");
    return pd;
}

Singleton::~Singleton()
{
    if(pd) delete pd;
    if(pc) delete pc;
    pd = 0;
    pc = 0;
}
