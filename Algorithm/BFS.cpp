///SHS
#include <bits/stdc++.h>
#define lli long long int
#define pb push_back
using namespace std;
vector <int> v[200002] ;
int level[200002];
bool vis[200002];
void bfs(int s) 
{
    queue <int> q;
    q.push(s);
    //level[s]=0;
    vis[s]=true;
    while(!q.empty())
    {
        int p=q.front();
        q.pop();
        for(int i=0;i<v[p].size();i++)
        {
            if(vis[v[p][i]]==false)
            {
                //level[v[p][i]]=level[p]+1; 
                q.push(v[p][i]);
                vis[ v[p][i]]=true;
                //cout<<v[p][i]<<' '<<level[v[p][i]]<<endl;
  			}
        }
    }
}
int main ()
{
    lli i,j,k,l,n,m,s;
    cin>>l;//Number of queries
    while (l--)
	{
		cin>>n; // Number of nodes;
		cin>>m; // Number of edges;
		for (i=0;i<=n;i++) 
		{
			if (v[i].size()) v[i].clear();
			level[i]=0;
			vis[i]=0;
		}
	    for (i=0;i<m;i++)
	    {
	        cin>>j>>k;
	        v[j].pb(k);
	        v[k].pb(j);
	    }
	    cout<<endl;
	    bfs (k);
	}
    return 0;
}

/*

6 6 1
1 2
1 3
2 4
3 4
4 5
4 6
*/







