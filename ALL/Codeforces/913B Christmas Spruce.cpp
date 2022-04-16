/*
************************************************
***               OmShantihari               ***
***           Author: Sujan Mridha           ***
***   CSE 5th batch, University of Barishal  ***
************************************************
*/
#include <iostream>
#include <algorithm>
#include<vector>
#define lli long long int
using namespace std;
int main ()
{
    ios :: sync_with_stdio(false);
    cin.tie(0);
    lli i,j,v,n,k,c,d,e,m,f,g,h=0;
    cin>>n;
    vector <vector<lli> > a(n+1);
    for (i=0,j=2;i<n-1;i++)
    {
        cin>>m;
        a[m].push_back(j);
        j++;
    }
    v=j;
    for (i=0;i<=n;i++)
    {

        d=0;
        if (a[i].size()!=0)
        {
            for (j=0;j<a[i].size();j++)
            {
                f=a[i][j];
                if (a[f].size()==0) d++;
            }
            if (d<3)
            {
                cout<<"No"<<endl;
                return 0;
            }

        }
    }
    cout<<"Yes"<<endl;
    return 0;
}

