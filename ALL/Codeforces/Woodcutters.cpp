///ShreeHarichad Smarane
#include <iostream>
using namespace std;
int main ()
{
    long int i,n,m,d,s,l,r,f,x[100009],h[100009];
    cin>>n;
    for (i=0;i<n;i++) cin>>x[i]>>h[i];
    if (n<3)
    {
        cout<<n;
        return 0;
    }
    s=2;
    n--;
    l=0;r=0;
    for (i=1;i<n;i++)
    {
        if (x[i]-(x[i-1]+h[i-1])>h[i] && r==1)
        {
            s++;
            r=0;
        }
        else if (x[i]-x[i-1]>h[i] && r==0) s++;
        else if (x[i+1]-x[i]>h[i])
        {
            s++;
            r=1;
        }
        else r=0;
    }
    cout<<s<<endl;

    return 0;
}
