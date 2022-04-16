/* OmShantihari; Author: Sujan Mridha, CSE 5th batch, University of Barishal */
#include <iostream>
#include <algorithm>
#include<vector>
#define lli long long int
#define pb push_back
#define fast ios :: sync_with_stdio(false); cin.tie(0);
//vector <lli> v;

using namespace std;
int main ()
{
    fast;
    lli i,j,v,n,k,c,d,e,m,f,g;
    string s;
    cin>>n>>s;
    for (i=0,j=0;i<n-1;i++)
    {
        if (s[i]>s[i+1])
        {

            s[i]='1';
            //cout<<s[i]<<endl;
            j=1;
            break;
        }
    }
    if (j==1) for (i=0;i<n;i++)
    {
        if (s[i]!='1') cout<<s[i];

    }
    else {for (i=0;i<n-1;i++) cout<<s[i];}
    cout<<endl;
    return 0;
}
