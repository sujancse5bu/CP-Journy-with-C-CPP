#include <iostream>
using namespace std;

template <class S>
S div (S a, S b)
{
    return a/b;
}
int main ()
{
    cout<<div(31,5)<<endl;
    cout<<div(13.5,5.2)<<endl;
    //cout<<div("3","5")<<endl;

    return 0;
}
