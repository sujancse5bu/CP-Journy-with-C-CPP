///SHS
#include <iostream>
#include <vector>
#include <queue>
#include <cmath>
using namespace std;
vector <int> node [200001];
int ab[200001],visited[200002];
int BFS(int source)
{
    int j=0,c=9;
    queue <int> q;
    q.push(source);
    visited[source]=1;
    if (ab[j]==1) j++;
    else return 0;
    while (!q.empty())
    {
        int i,p=q.front();
        q.pop();
        for (i=0;i<node[p].size();i++)
        {

            if (visited[node[p][i]]==0)
            {

                if (ab[j]==node[p][i])
                {

                    c=2;
                    j++;
                    visited[node[p][i]]=1;
                    q.push(node[p][i]);
                    i=-1;
                }
                else c=9;
            }
            //cout<<c<<endl;
        }
    }
    if (c==9) return 0;
    return 1;
}
int main ()
{
    int nd,edge,i,a1=0,a2,b,a;
    cin>>edge;
    for (i=0;i<edge-1;i++)
    {
        cin>>a>>b;
        node[a].push_back(b);
        node[b].push_back(a);
    }
    for(i=0;i<edge;i++) cin>>ab[i];
    i=BFS (1);
    if (i==0) cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
    return 0;
}
