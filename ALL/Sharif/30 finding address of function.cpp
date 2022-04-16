///ShreeHarichad Smarane
#include <iostream>
using namespace std;
int abc (int a, int b){return a+b;}
void abc (int a){cout<<a<<endl;}
main ()
{
    int (*p)(int, int);
    p=abc;
    cout<<p<<endl;
    cout<<p(8,9)<<endl;
    void (*p1)(int);
    cout<<p1<<endl;
    p1=abc;
    p1 (8);



    return 0;
}
