///OmShantiHari
#include <iostream>
using namespace std;
int main ()
{
    int i,j,k,l,m,n,a[300][300],b[3][300]={0};
    string s[300],t[300];
    cin>>n;
    for (i=0;i<n;i++) cin>>s[i]>>a[0][i];
    for (i=0,k=0;i<n;i++)
    {
        for (j=0;j<=i;j++)
        {
            cout<<k<<endl;
            if (s[i]==s[j])
            {
                t[k]=s[i];
                b[0][k]+=a[0][j];
                s[j][0]='0';
                k++;
                cout<<s[j]<<endl;
            }
        }
    }
    for (i=0;i<k;i++) cout<<t[i]<<" "<<b[0][i]<<endl;
    return 0;
}
