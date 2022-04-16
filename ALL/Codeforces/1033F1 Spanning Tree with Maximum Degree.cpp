///SHS
#include <iostream>
#include <vector>
#include <queue>
#include <cmath>
using namespace std;
vector <int> node [200001];
int ab[200001],visited[200002];
void BFS(int source)
{
    int j=0,c=9;
    queue <int> q;
    q.push(source);
    visited[source]=1;
    while (!q.empty())
    {
        int i,p=q.front();
        q.pop();
        for (i=0;i<node[p].size();i++)
        {
            if (visited[node[p][i]]==0)
            {
            	cout<<p<<' '<<node[p][i]<<endl;
                visited[node[p][i]]=1;
                q.push(node[p][i]);
            }
        }
    }
    
}
int main ()
{
    int nd,edge,i,a1=0,a2,b,a,n;
    cin>>n>>edge;
    for (i=0;i<edge;i++)
    {
        cin>>a>>b;
        node[a].push_back(b);
        node[b].push_back(a);
    }
    for (i=0;i<=n;i++) if (node[i].size()>node[a1].size()) a1=i;
    BFS (a1);
    return 0;
}
