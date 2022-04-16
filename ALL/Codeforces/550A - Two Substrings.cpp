#include <iostream>
#include <cstring>
using namespace std;
int main ()
{
    int i,o,n,p,x,s,y;
    char d[100001];
    cin>>d;
    n=strlen(d);
    i=1;o=n;x=0;y=0;p=n;s=0;
    while (i<n && n>3)
    {
        if (d[i-1]=='A' && d[i]=='B' && x==0)
        {
            x=1;
            o=i;
        }
        else if (d[i-1]=='B' && d[i]=='A' && y==0)
        {
            y=1;
            p=i;
        }
        if (y!=0 && x!=0) break;
        i++;
    }
    if (x==1)
    {
        i=o+1;
        while (i<n-1)
        {
            if (d[i]=='B' && d[i+1]=='A')
            {
                s=2;
                break;
            }
            i++;
        }
    }
    if (y==1 && s==0)
    {
        i=p+1;
        while (i<n-1)
        {
            if (d[i]=='A' && d[i+1]=='B')
            {
                s=2;
                break;
            }
            i++;
        }
    }

    if (s==0) cout<<"NO"<<endl;
    else cout <<"YES"<<endl;
    return 0;
}
