#include<stdc++.h>
using namespace std;
int a[100000];
int main()
{
    int i,j,m,n,sum=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        a[x]++;
    }
    for(i=1;i<=m;i++)
    {
        if(a[i]==0) sum++;
    }
    cout<<sum<<endl;
}
