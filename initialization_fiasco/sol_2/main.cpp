#include <iostream>
#include "dog.h"
#include "cat.h"
extern Dog d();
using namespace std;
/*
    Construct On First Use Idiom will solve this problem
*/
int main()
{
    d().bark();
    return 0;// not mandatory, compiler will include automatically
}