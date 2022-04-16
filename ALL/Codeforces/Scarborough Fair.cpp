///    OmShantihari
///    Author: Sujan Mridha
///    CSE 5th batch, University of Barishal
#include <iostream>
#include <cstring>
using namespace std;
int main ()
{
    int i,j,k,n,m,x[1000],y[1000];
    char s[200],l[200],r[200];
    cin>>n>>m>>s;
    for (i=0;i<m;i++)
    {
        cin>>x[i]>>y[i]>>l[i]>>r[i];
        for (j=x[i]-1;j<y[i];j++) if (s[j]==l[i]) s[j]=r[i];
    }
    cout<<s<<endl;
    return 0;
}
