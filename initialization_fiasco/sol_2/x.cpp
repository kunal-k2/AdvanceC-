#include "dog.h"

Dog& d()
{
    cout<<"inside Dog& d()"<<endl;
    static Dog* temp = new Dog("xyz");
    return *temp;
}