/* OmShantihari; Author: Sujan Mridha, CSE 5th batch, University of Barishal */
#include<bits/stdc++.h>
#define lli long long int

using namespace std;
int main ()
{
    lli i,j,n,k,c[200005],e,m,h=0;
    vector <lli> q;
    cin>>n;
    for (i=0;i<n;i++)
    {
        cin>>c[i];
        h+=c[i];
    }
    for (i=0,j=0;i<n;i++)
    {

        m=h-c[i];
        for (k=0;k<n;k++)
        {

            if (k!=i)
            {
                //cout<<c[k]<<' '<<m<<endl;
                if (c[k]==m-c[k])
                {
                    q.push_back(i);
                }
            }
        }
    }
    j=q.size();
    cout<<j<<endl;
    for (i=0;i<j;i++) cout<<q[i]+1<<' ';
    cout<<endl;
    return 0;
}

