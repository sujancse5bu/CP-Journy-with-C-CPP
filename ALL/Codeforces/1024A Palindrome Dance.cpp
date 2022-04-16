//    OmShantihari
///    Author: Sujan Mridha
///    CSE 5th batch, University of Barishal
#include <iostream>

using namespace std;
int main ()
{
    int i,j,k,l,n,a,w,b,s[200];
    cin>>n>>w>>b;
    for (i=0;i<n;i++) cin>>s[i];
    if (w<b) a=w;

    else a=b;
    if (n==1 && s[0]==2)
    {
        cout<<a<<endl;
        return 0;
    }
    if (n==1 && s[0]==0)
    {
        cout<<0<<endl;
        return 0;
    }
    if (n==1 && s[0]==1)
    {
        cout<<0<<endl;
        return 0;
    }
    for (i=0,j=n-1,l=0;i<j;i++,j--)
    {
        if (s[i]==s[j] && s[i]==2) l+=2*a;
        else if (s[i]==1 && s[j]==0)
        {
            cout<<"-1"<<endl;
            return 0;
        }
        else if (s[i]==0 && s[j]==1)
        {
            cout<<"-1"<<endl;
            return 0;
        }
        else if (s[i]==0 && s[j]==2) l+=w;
        else if (s[i]==2 && s[j]==0) l+=w;
        else if (s[i]==2 && s[j]==1) l+=b;
        else if (s[i]==1 && s[j]==2) l+=b;
    }
    if (n%2==1 && s[n/2]==2) l+=a;
    cout<<l<<endl;
    return 0;
}

