/* OmShantihari; Author: Sujan Mridha, CSE 5th batch, University of Barishal */
#include<bits/stdc++.h>
#define lli long long int
#define pb push_back
#define fast ios :: sync_with_stdio(false); cin.tie(0);
using namespace std;
//vector <int> v,t;
int a[100001],b[100001];
string s;
int main ()
{
    fast;
    lli i,j,n,k,l,m,o,e,c,d,x,y,z,sum=1;
    cin>>s;
    l=s.size();
    a[0]=-1;
    for (i=0,j=0,o=0,e=0;i<n-1;i++)
    {
        if (s[i]==s[i+1])
        {
            sum++;
            if (i!=0) a[j]=i-1;
        }
        else
        {
            c=sum/2;
            sum=sum%2;
            if (c%2==1)
            {
                e++;
                a[j]=-1;
            }
            else
            {
                if (a[j]>=0) b[j]=
                o++;
            }
            sum=1;
        }
    }



    return 0;
}

