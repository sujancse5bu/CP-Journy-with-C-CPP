///    OmShantihari
///    Author: Sujan Mridha
///    CSE 5th batch, University of Barishal
#include <iostream>

using namespace std;
int main ()
{
    int i,j,k,l,g,f,d,c,m,n;
    string s[300];
    cin>>n>>m;
    for (i=0;i<n;i++) cin>>s[i];
    for (i=0;i<n;i++)
    {
        for (j=0,k=0,l=500,g=0;j<m;j++)
        {
            //cout<<"s";
            if (s[i][j]=='B' && k==0)
            {
                l=i+1;
                k=1;
            }
            if (s[i][j]=='B') g++;
        }
        //cout<<endl;
        if (g>0) break;
    }

    l+=(g/2);
    for (i=0;i<m;i++)
    {
        for (j=0,f=0,d=500,c=0;j<n;j++)
        {

            if (s[j][i]=='B' && f==0)
            {
                d=i+1;
                f=1;
            }
            if (s[j][i]=='B') c++;
        }

        if (c>0) break;
    }
    //cout<<d<<endl<<c<<endl;
    d+=(c/2);
    cout<<l<<" "<<d<<endl;
    return 0;
}
