///ShreeHarichad Smarane
#include <iostream>
using namespace std;

class Number
{
    int x,y; ///private member variable
public:
    Number (){x=0;y=0;}; ///Constructor
    Number (int a, int b){x=a;y=b;}; ///Constructor
    void get (int &a, int &b){a=x;b=y;}
    void set (int a, int b) {x=a;y=b;}
    Number operator + (Number ob);
};
Number Number::operator + (Number ob)
{
    Number tmp;
    tmp.x=x+ob.x;
    tmp.y=y+ob.y;
    return tmp;
}
int main ()
{
    nummber n1,n2,n3;
    n3=n1+n2;
    return 0;
}



