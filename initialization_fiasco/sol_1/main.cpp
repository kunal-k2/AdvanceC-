#include<iostream>
#include "dog.h"
#include "cat.h"
#include "singleton.h"
using namespace std;
/*
    Construct On First Use Idiom will solve this problem
*/
int main()
{
    Singleton::getCat()->meow();
    return 0;// not mandatory, compiler will include automatically
}