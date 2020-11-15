#include "cat.h"

Cat& c()
{
    cout<< " Cat& c() " << endl;
    static Cat* temp = new Cat("abc");
    return *temp;
}
