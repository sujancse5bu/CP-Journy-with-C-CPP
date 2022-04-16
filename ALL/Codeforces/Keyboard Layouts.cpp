///    OmShantihari
///    Author: Sujan Mridha
///    CSE 5th batch, University of Barishal
#include <iostream>
using namespace std;
int main ()
{
    int i,j,k,l,m,n;
    string x,y,s;
    cin>>x>>y>>s;
    l=s.size();
    for (i=0;i<l;i++)
    {
        for (j=0;j<26;j++)
        {
            if (s[i]==x[j])
            {
                s[i]=y[j];
                break;
            }
            else if (s[i]+32==x[j])
            {
                s[i]=y[j]-32;
                break;
            }
        }
    }
    cout<<s<<endl;

    return 0;
}
