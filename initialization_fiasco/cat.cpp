#include "cat.h"
#include "dog.h"

Dog d("xyz");

Cat::Cat(string name)
{
    _name = name;
    cout << "Inside Cat Constructor" << endl;
    d.bark();
}

void Cat::meow()
{
    cout << "Inside Cat::meow()" << endl;
}