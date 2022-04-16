/* OmShantihari; Author: Sujan Mridha, CSE 5th batch, University of Barishal */
#include<bits/stdc++.h>
#define lli long long int
#define pb push_back
#define fast ios :: sync_with_stdio(false); cin.tie(0);
//vector <lli> v;

using namespace std;
int main ()
{
    fast;
    vector<int> v1;
    vector<int> v2;
    lli i,j,m,n,o,p,k,h,a[10],b[10];
    while(cin>>m>>n>>o>>p){
    double sum=1.0;
    a[0]=m;
    a[1]=m-n;
    a[2]=n;
    b[0]=o;
    b[1]=o-p;
    b[2]=p;
    sort(a,a+3);
    sort(b,b+3);
    for(i=0;i<3;i++)
    {

        if(a[i]>b[i]) for(j=a[i];j>b[i];j--) v1.push_back(j);
        else for(j=b[i];j>a[i];j--) v2.push_back(j);
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        for(j=0;j<v1.size();j++)
        {
            if(j<v2.size()) sum=(sum*v1[j])/v2[j];
            else sum=sum*v1[j];
        }
    }
    printf("%.5lf\n",sum);
    v1.clear();
    v2.clear();
}
    return 0;
}


