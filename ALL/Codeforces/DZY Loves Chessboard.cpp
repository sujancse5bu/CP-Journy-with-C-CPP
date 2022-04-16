///ShreeHarichad Smarane
#include <iostream>
using namespace std;
int main ()
{
    int i,j,k,l,m,n;
    string s[200];
    cin>>n>>m;
    for (i=0;i<n;i++) cin>>s[i];
    for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            if (i%2==0 && j%2==0 && s[i][j]=='.') cout<<"B";
            else if (i%2==0 && j%2==1 && s[i][j]=='.') cout<<"W";
            else if (i%2==1 && j%2==0 && s[i][j]=='.') cout<<"W";
            else if (i%2==1 && j%2==1 && s[i][j]=='.') cout<<"B";
            else cout<<s[i][j];
        }
        cout<<endl;
    }
    return 0;
}
