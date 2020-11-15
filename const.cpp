#include <iostream>
using namespace std;

void Static_Cast()
{
    int x, i = 20;
    cout << "Initially I = " << i << endl;
    cout << "Give some integer input" << endl;
    cin >> x;
    i += x;
    cout << "Final value, i = " << i;
    cout << "Now i want to make it constant" << endl;
    static_cast<const int &>(i);
    i = 30;
    i = 59;

    cout << " I = "<< i<<endl; 
}
void Const_cast()
{
    const int i = 10;
    cout << "Before change i = " << i << endl;
    const_cast<int& >(i) = 20;
    cout << "after change i = " << i << endl;
}
void usesOfConst()
{
    int x1 = 10;
    const int x2 = 20;
    int x3 = 3;

    cout << "--------change value of constant data using Pointer-------" << endl;
    cout << " before changes x2 = " << x2 << endl;
    int *p1 = (int *)&x2;
    *p1 = 21;
    cout << " After changes  x2 = " << x2 << ", *p1 = " << *p1 << endl;
    cout << " Address of x2 = " << &x2 << ", and p1 pointing to = " << p1 << endl;
    cout << " After changes  x2 = " << x2 << ", *p1 = " << *p1 << endl;

    const int *p2 = &x2;
    // *p2 = 30;  // will give error here pointer is pointing to constant data
    cout << "p2 is pointing to " << p2 << endl;
    p2 = &x3; // but p2 can point to another variable.
    cout << "Now p2 is pointing to " << p2 << endl;

    const int *const p3 = &x2;
    // int const * const p3 = &x2;
    // const int const * const p3 = &x2;
    // all above declaration is same

    // *p3 = 22; // not allow
    // p3 = &x3; // not allow

    /*
    conclution:-
        1) if const is on the left of "*" then data is constanat
        2) if const is on the Right of "*" then pointer is constanat
    */
}
int main()
{
    // Static_Cast();
    // usesOfConst();
    Const_cast();
    return 0;
}