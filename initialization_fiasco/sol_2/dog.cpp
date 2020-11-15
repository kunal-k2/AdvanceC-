#include "dog.h"
#include "cat.h"

Dog::Dog(string name)
{
    cout << "Dog::Dog(string) ctor called" << endl;
    _name = name;
}

void Dog::bark()
{
    cout << "Inside Dog::bark()" << endl;
}