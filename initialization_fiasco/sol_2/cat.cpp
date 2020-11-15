#include "cat.h"
#include "dog.h"

extern Dog d();

Cat::Cat(string name)
{
    _name = name;
    cout << "Inside Cat Constructor" << endl;
    d().bark();
}

void Cat::meow()
{
    cout << "Inside Cat::meow()" << endl;
}