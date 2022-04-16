///ShreeHarichad Smarane
#include <iostream>
#include <algorithm>
using namespace std;
int k[1000000];
int main ()
{
    long long int i=0,a,d,f,b=0,n,m;
    cin>>n;
    while (1)
    {
        d=0;
        a=0;
        m=b;
        while (m>0)
        {
            a++;
            m/=2;
        }
        m=b;
        for (i=a-1;i>=0;i--,m/=2)
        {
            f=m%2;
            if (f==0) d+=4;
            else if (f==1) d+=7;
        }
        m=b;
        if (d==n)
        {
            for (i=a-1;i>=0;i--,m/=2)
            {
                f=m%2;
                if (f==0) k[i]=4;
                else if (f==1) k[i]=7;
            }
            sort (k,k+a);
            for (i=0;i<a;i++) cout<<k[i];
            cout<<endl;
            break;
        }
        else if (d>n+7)
        {
            if (n%4==0)
            {
                d=0;
                n/=4;
                d=n/7;
                i=n%7;
                d*=4;
                while (i--) cout<<4;
                while (d--) cout<<7;
                cout<<endl;
                return 0;
            }
            cout<<"-1"<<endl;
            break;
        }
        //cout<<d<<endl;
        b++;
    }
    return 0;
}
