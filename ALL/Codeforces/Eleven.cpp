///Shree Harichad Smrane
#include <iostream>
using namespace std;
int main ()
{
    int i,a,b,c=2,s=3,n;
    cin>>n;
    if (n==1)
    {
        cout<<"O";
        return 0;
    }
    if (n==2)
    {
        cout<<"OO";
        return 0;
    }
    a=1,b=1;
    cout<<"OO";
    while (s<=n)
    {
        s=a+b;
        a=b;
        b=s;
        for (i=0;i<s && c<n;i++,c++)
        {
            if (i==0) cout<<"O";
            else cout<<"o";
        }
    }
    return 0;
}
