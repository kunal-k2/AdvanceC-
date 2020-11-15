#include "dog.h"
#include "cat.h"

Cat c("Cat");

Dog::Dog(string name)
{
    cout << "Dog::Dog(string) ctor called" << endl;
    _name = name;
    c.meow();
}
void Dog::bark()
{
    cout << "Inside Dog::bark()" << endl;
}