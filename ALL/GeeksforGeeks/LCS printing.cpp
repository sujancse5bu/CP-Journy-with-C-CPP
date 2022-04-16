#include<bits/stdc++.h>
using namespace std;
string x,y;
int z[500][500];
int lcs (int m, int n)
{
    for (int i=0;i<=m;i++) z[0][i]=0;
    for (int i=0;i<=n;i++) z[i][0]=0;
    for (int i=0;i<=m;i++) for (int j=0;j<=n;j++)
    {
        if (m==0 && n==0) z[i][j]=0;
        if (x[i-1]==y[j-1]) z[i][j]=z[i-1][j-1]+1;
        else z[i][j]=max(z[i-1][j],z[i][j-1]);
    }
    int k=z[m][n];
    char s[k];
    for (int i=m,j=n;i>0 && j>0;)
    {
        if (x[i-1]==y[j-1])
        {
            s[k-1]=x[i-1];
            k--;
            i--;
            j--;
        }
        else if (z[i-1][j]>z[i][j-1]) i--;
        else j--;
    }
    cout<<s<<endl;
}
int main ()
{
    int i,j,m,n,o;
    cin>>x>>y;
    m=x.size();
    n=y.size();
    o=lcs(m,n);



    return 0;
}
