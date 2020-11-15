#include<iostream>
#include<Vector>
using namespace std;

class BigArray
{
    vector<int> v;
    int accessCounter;
    int *v1;
public:
    BigArray()
    {
        accessCounter = 0;
        v.push_back(10);
        v.push_back(20);
        v.push_back(30);
        v.push_back(40);
        v1 = new int[10];
        for(int i= 0;i <10;i++)
        {
            v1[i] = i;
        }
    }
    int getItem() const
    {
        // accesscounter++; // Logical constant 
        const_cast<BigArray*>(this)-> accessCounter++;
        // v.push_back(20);
        return v[accessCounter];
    }
    void setIndexValue(int index, int x) const
    {
        *(v1 + index) = x; //Bitwise constant
        v1[1] =30;
        // v1 = new double[10]; //but this is not allowed
    }
    void printDataMember()
    {
        cout<<"AccessCounter = "<< accessCounter<<endl;
        cout<< " vector : ";
        for(auto i : v)
        {
            cout<< i <<" ";
        }
        cout<<endl<<"Array : ";
        for(int i= 0;i <10;i++)
        {
            cout<< v1[i]<< " ";
        }
        cout<<endl;
    }
};
int main()
{
    BigArray *b = new BigArray();
    b->printDataMember();

    cout<< "Get vector items : "<<b->getItem()<<endl;
    cout<< "Get vector items : "<<b->getItem()<<endl;
    cout<< "Get vector items : "<<b->getItem()<<endl;

    b->setIndexValue(0,22);
    b->printDataMember();
    return 0;
}