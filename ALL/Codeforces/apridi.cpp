#include <bits/stdc++.h>
#define L long long int
using namespace std;
int main()
{
int n,m;
cin>>n>>m;
int a[n];
for(int i=0;i<n;i++) cin>>a[i];
for(int i=0,j=m;i<n-m;i++,j++){
a[i]=a[j];
}
for(int i=0;i<m;i++) cout<<a[i]<<" ";
return 0;
}
