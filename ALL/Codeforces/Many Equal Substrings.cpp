///    OmShantihari
///    Author: Sujan Mridha
///    CSE 5th batch, University of Barishal
#include <iostream>

using namespace std;
int main ()
{
    int i,j,n,m,l,k,h,b,v,c,x,z;
    string s;
    cin>>n>>k>>s;
    l=s.size();
    for (i=0,v=0;i<l-1;i++) if (s[i]!=s[i+1]) v=2;
    if (v==0)
    {
        cout<<s;
        for (i=0;i<k-1;i++) cout<<s[0];
        cout<<endl;
        return 0;
    }
    for (i=0,v=0,h=0,j=1;j<l;)
    {
        if (s[i]==s[j])
        {
            if (h==0) h=j;
            i++;
            j++;
        cout<<i<<" "<<j<<" "<<h<<endl;
            continue;
        }
        if (h==0) j++;
        i=0;
        h=0;
    }
    //cout<<h<<endl;
    if (h==0)
    {
        for (i=0;i<k;i++) cout<<s;
        return 0;
    }
    for (i=0;i<k;i++)
    {
        for (j=0;j<h;j++) cout<<s[j];
    }
    for (i=h;i<l;i++) cout<<s[i];
    cout<<endl;
    return 0;
}

