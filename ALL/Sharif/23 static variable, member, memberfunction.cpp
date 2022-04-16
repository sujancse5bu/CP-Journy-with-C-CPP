///ShreeHarichad Smarane
#include <iostream>
using namespace std;

class abc
{
public:
    static int a;
    int b;
    void func (){cout<<++a<<" "<<++b<<endl;}
    abc(){b=0;}
};
int abc::a;
int main ()
{
    abc obj,obj1;
    obj.func ();
    obj.func ();
    obj1.func ();
    return 0;
}
