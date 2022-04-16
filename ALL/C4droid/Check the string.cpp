///ShreeHarichad Smrane
#include <iostream>
#include <cstring>
using namespace std;
int main ()
{
    int i,n,a,b,c,d=0;
    char x[5003];
    cin>>x;
    n=strlen (x);
    a=0,b=0,c=0;
    for (i=0;i<n;i++)
    {
        if (i!=n-1)
        {
            if (x[i]=='b' && x[i+1]=='a') d=3;
            else if (x[i]=='c' && x[i+1]=='a') d=3;
            else if (x[i]=='c' && x[i+1]=='b') d=3;
            if (d==3) break;
        }
        if (x[i]=='a') a++;
        else if (x[i]=='b') b++;
        else if (x[i]=='c') c++;
    }
    if (a>0 && b>0 && c>0 && d!=3)
    {
        if (c==a || c==b) cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
    return 0;
}
