///    OmShantihari
///    Author: Sujan Mridha
///    CSE 5th batch, University of Barishal
#include <iostream>
#include <algorithm>
using namespace std;

int main ()
{
    long long int i,j,n,x;
    cin>>n;
    long long int a[n+1];
    for (i=0;i<n;i++) cin>>a[i];
    sort (a,a+n);
    n--;
    for (i=0;i<n;i++)
    {
        //if (a[i]*2==a[i+1] || a[i]*3==a[i+1] || a[i]==a[i+1] || a[i]*3==a[i+1]*2) {}
        if (a[i]!=a[i+1])
        {
            x=a[i]*a[i+1];
            if (x%2==0 || x%3==0){}
            else
            {
                cout<<"No"<<endl;
                return 0;
            }
        }


    }
    cout<<"Yes"<<endl;
    return 0;
}
