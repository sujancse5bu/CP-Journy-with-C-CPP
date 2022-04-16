///ShreeHarichad Smarane
#include <iostream>
using namespace std;

class abc
{
    int *p;
public:
    abc (){p=new int (0);}
    ~abc (){cout<<"dis...."<<*p<<endl; delete p;}
    void set (int x) {*p=x;}
    void get (){cout<<*p<<endl;}
    abc (abc &o)
    {
        p=new int (1);
        cout<<"cons...."<<*p<<endl;
    }
};
main ()
{
    abc  a;
    a.get ();
    abc b=a;
    a.get ();
    b.get ();
    b.set (4);
    a.get ();
    b.get ();
    return 0;
}
