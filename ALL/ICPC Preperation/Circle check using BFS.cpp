#include <iostream>
#include <queue>
#include <vector>
using namespace std;
vector <int> adj[100];
int visited[100];

int bfs (int s, int n)
{
    queue <int> q;
    q.push(s);
    visited[s]=1;
    while (!q.empty())
    {
        int u=q.front();
        q.pop();
        for (int i=0;i<adj[u].size();i++) if (visited[adj[u][i]]!=0) return 1;
    }
    return 5;







}
int main ()
{
    int i,j,s,n,a,b;
    cin>>n>>s; /// s is starting vertex, n is the number of vertices
    for (i=0;i<n;i++)
    {
        cin>>a>>b;
        adj[a].push_back(b);
    }
    s=bfs(s,n);
    //if (s==)

}
