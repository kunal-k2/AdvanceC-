#include<iostream>
using namespace std;
class Dog{
    public:
    Dog* clone(){ return new Dog(*this);}// co-variant return type
};
class YellowDog : public Dog{
    public:
    virtual YellowDog* clone() { return new YellowDog(*this);}
};
void foo(Dog* d)//d is a yellow dog
{
    Dog* c= new Dog(*d);// c is dog
    Dog* c= d->clone();// c is yellowDog
    // ...
    // play with dog c
}
int main()
{
    YellowDog d;
    foo(&d);
    return 0;
}