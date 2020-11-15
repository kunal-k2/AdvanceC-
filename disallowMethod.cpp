#include <iostream>
#include <fstream>
using namespace std;
class DisallowDtor
{
    public:
    DisallowDtor()
    {
        cout<< " ctor called"<< endl;
    }
    void deleteMe()
    {
        //this will call dtor when we create Object on Heap
        delete this;
    }
private:
    // When Object size is too huge then we should make private dtor 
    // so that we can clear data any time
    ~DisallowDtor()
    {
        cout<<"Dtor called "<<endl;
    }
};
class DisallowCopyCtor
{
public:
    int p;
    DisallowCopyCtor()
    {
        p = 10;
        cout << "Inside DisallowCopyCtor ctor" << endl;
    }
    // function declaration = delete supported in c++11 onwards
    // DisallowCopyCtor copy ctor
    DisallowCopyCtor(DisallowCopyCtor &d)= delete; 
private:
    //using this technique we can DisallowCopyCtor any function
    // only declare a function but not define it.
    // DisallowCopyCtor(DisallowCopyCtor &d);
};
class OpenFile
{
    
public:
    fstream f;
    OpenFile(string filename)
    {
        f.open("abc.txt", ios::out | ios::in);
        cout << "Open File :" << filename << endl;
    }
    // ~OpenFile()
    // {
    //     f.close();
    //     cout<<"File closed"<<endl;
    // }
};


int main()
{
    cout << "CPP version : " << __cplusplus << endl;
    OpenFile f("abc.txt");
    // OpenFile f1(f); //not allowdwed in C++11 onwards.
    /*
        we cann't use copy ctor for fstream because they have internally impl
        basic_fstream(const basic_fstream&) = delete;
    */
    DisallowCopyCtor d;
    // DisallowCopyCtor d1(d); // not allow because, Copy ctor is  disable 
    cout<<"d1.p = "<</*d1.p*/+" "<<", d.p = "<<d.p<<endl;

    // DisallowDtor dd; 
    DisallowDtor *dp= new DisallowDtor();
    dp->deleteMe(); 
    return 0;
}