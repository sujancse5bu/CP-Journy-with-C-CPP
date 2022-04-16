///OmShantiHari
#include <iostream>
using namespace std;
int main ()
{
    int i,j,k,l,m,n;
    string b,s[300];
    cin>>n;
    for (i=0;i<n;i++) cin>>s[i];
    b[0]=s[0][0];
    b[1]=s[0][1];
    if (b[0]==b[1])
    {
        cout<<"NO"<<endl;
        return 0;
    }
    for (i=0,j=0,k=n-1;i<n;i++,k--,j++)
    {
        if (b[0]!=s[i][j] || b[0]!=s[i][k])
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    for (i=0,j=0,k=n-1;i<n;i++,k--,j++)
    {
        for (l=0;l<n;l++)
        {
            if (l!=j && l!=k && s[i][l]!=b[1])
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
