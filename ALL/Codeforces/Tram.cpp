///SMS
#include <iostream>
using namespace std;
int main ()
{
    int i,j,a,b,x=0,y=0,n,s=0;
    cin>>n;
    for (i=0;i<n;i++)
    {
        cin>>a>>b;
        x-=a;
        x+=b;
        if (x>s) s=x;
    }
    cout<<s<<endl;
    return 0;
}
