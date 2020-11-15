#include "cat.h"
#include "dog.h"
#include "singleton.h"

Cat::Cat(string name)
{
    _name = name;
    cout << "Inside Cat Constructor" << endl;
    Singleton::getDog()->bark();
}

void Cat::meow()
{
    cout << "Inside Cat::meow()" << endl;
}