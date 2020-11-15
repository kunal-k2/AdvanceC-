#include "dog.h"
#include "cat.h"
#include "singleton.h"

Dog::Dog(string name)
{
    cout << "Dog::Dog(string) ctor called" << endl;
    _name = name;
    // Singleton::getCat()->meow();
}

void Dog::bark()
{
    cout << "Inside Dog::bark()" << endl;
}