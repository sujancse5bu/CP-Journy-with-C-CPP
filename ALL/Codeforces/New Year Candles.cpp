#include <iostream>
using namespace std;
int main ()
{
    int i,a,b,s=0;
    cin>>a>>b;
    s=a;
    while (a>=b)
    {
        s+=a/b;
        a=a/b+a%b;
    }
    cout<<s<<endl;
}
