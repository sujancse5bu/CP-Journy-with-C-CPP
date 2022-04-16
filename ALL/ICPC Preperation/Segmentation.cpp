#include <iostream>
using namespace std;
int n,arr[1000000],parent[1000000];
void init (int node, int i, int j);
int query (int node, int i, int j, int p, int q);
void update (int node, int i, int j, int p, int x); /// Here x is value of index p;
int main ()
{
    int i,j,v,q;
    char z;
    cin>>n;
    for (i=1;i<=n;i++) cin>>arr[i];
    init (1,1,n);
    cin>>q;
    while (q--)
    {
        cin>>z;
        if (z=='u')
        {
            cin>>i>>v;
            update (1,1,n,i,v);
        }
        else if (z=='q')
        {
            cin>>i>>j;
            cout<<query(1,1,n,i,j)<<endl;
        }
    }
    return 0;
}

void update (int node, int i, int j, int p, int x)
{
    if (i>p || j<p) return;
    if (i==j)
    {
        parent[node]=x;
        return;
    }
    int mid=(i+j)/2;
    int left=node*2;
    int right=node*2+1;
    update (left,i,mid,p,x);
    update (right,mid+1,j,p,x);
    parent[node]=parent[left]+parent[right];
}


















int query (int node, int i, int j, int p, int q)
{
    if (i>q || j<p) return 0;
    if (i>=p && j<=q ) return parent[node];
    int mid=(i+j)/2;
    int left =node*2;
    int right= node*2+1;
    int x= query(left,i,mid,p,q);
    int y= query(right,mid+1,j,p,q);
    return x+y;
}







void init (int node, int i, int j)
{
    if (i==j)
    {
        parent [node]=arr[i];
        return ;
    }
    int mid = (i+j)/2;
    int left =node*2;
    int right = node*2+1;
    init (left,i,mid);
    init (right,mid+1,j);
    parent [node]=parent [right]+parent [left];
}
