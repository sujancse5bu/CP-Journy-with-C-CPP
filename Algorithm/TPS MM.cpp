#include <bits/stdc++.h>
#define lli long long int
#define pb push_back
using namespace std;
vector<lli> b,a[20000];
queue<int> q;
bool v[20000]={0};
void dfs (lli x)
{
	v[x]=1;
	int j=a[x].size();
	for (int i=0;i<j;i++) 
	{
		if (a[x][i]==0) dfs(a[x][i]);
	}
	b.pb(x);
}
int main ()
{
    lli i,n,m,e,j,k=0,d,x,y;
    cout<<"Enter the number of vertices: ";
    cin>>n;
    cout<<"Enter the number of edges: ";
    cin>>m;
    cout<<"Enter "<<m<<" edges: "<<endl;
    for (i=0;i<m;i++)
    {
    	cin>>x>>y;
    	a[x].pb(y);
	}
	for (i=0;i<=n;i++) 
	{
		if (v[i]==0) 
		{
			dfs(i);
			
		}
	}
	cout<<endl;
	for (i=0;i<b.size();i++) cout<<b[i]<<endl;
    return 0;
}

/*
5 2
5 0
4 0
4 1
2 3
3 1
*/

