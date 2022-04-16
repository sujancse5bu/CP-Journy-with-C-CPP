/* OmShantihari; Author: Sujan Mridha, CSE 5th batch, University of Barishal */
#define fast ios :: sync_with_stdio(false); cin.tie(0);
#define f(i,a,b) for(i=a;i<=b;i++)
#define r(i,a,b) for(i=a;i>=b;i--)
#define lli long long int
#include<bits/stdc++.h>
#define pb push_back
#define rs resize
#define S second
#define F first
#define all(v) v.begin(), v.end()
using namespace std;
vector <lli> adj[100001],b;
bool vs[100001],a[1002]={0},d[1002]={0};
lli c=0;
void dfs(lli s)
{
	vs[s]=1;
	for (int i=0;i<adj[s].size();i++) if (vs[adj[s][i]]==0) dfs(adj[s][i]);
}

int main ()
{
	lli i,j,k,n,m,e,x,y,cc=0;
	cin>>n>>m; //Number of nodes
	for (i=0;i<m-1;i++)
	{
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	
	
	dfs(1);
	
	return 0;
}
