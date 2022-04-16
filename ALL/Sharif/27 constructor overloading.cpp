///ShreeHarichad Smarane
#include <iostream>
using namespace std;

class abc
{
    int a;
public:
    abc(int x, int y){a=x+y;}
    abc(int x){a=x;}
    abc (){a=0;}
    int ret(){return a;}
};


int main ()
{
    abc q(3,3),p,o(5);
    cout<<o.ret()<<endl;
    cout<<p.ret()<<endl;
    cout<<q.ret()<<endl;
    return 0;
}
