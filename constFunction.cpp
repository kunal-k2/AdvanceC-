#include <iostream>
using namespace std;
class Person
{
    private:
    int age;
    string name;

    public:
    Person(int age, string name)
    {
        this->age = age;
        this->name = name;
        cout << " ctor called " << endl;
    }
    //Contant Function Prameter 
    void setAge(const int &age) 
    {
        // age = age + 10; // not allowded to modify function parameter
        this->age = age;
    }
    //Constant return Value 
    const string & getName()
    {
        return this->name;
    }
    //Constant Function
    void changeDataMember(int age, string name) const
    {
        //Here we can not modify any data member 
        // this->age = age;
        // this->name = name;
        age = 10;
    }

};
int main()
{
    Person p(24, "kunal");
    return 0;
}