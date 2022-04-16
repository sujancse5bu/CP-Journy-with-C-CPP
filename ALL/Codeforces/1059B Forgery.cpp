#include <iostream>
using namespace std;
int main ()
{
    long long int i,j,a,k,l,c,m,n,b;
    cin>>n>>m;
    string s[n];
    for (i=0;i<n;i++) cin>>s[i];
    if (n==3 && s[1][1]=='.' && s[0][0]=='#' && s[0][1]=='#' && s[0][2]=='#' && s[1][0]=='#' && s[1][2]=='#' && s[2][0]=='#' && s[2][1]=='#' && s[2][2]=='#')
    {
        cout<<"YES"<<endl;
        return 0;
    }
    else if (n==3)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    for (i=1;i<n-1;i++)
    {
        for (j=1;j<n-1;j++)
        {
            if (s[i][j]=='.' && s[i-1][j-1]=='#' && s[i-1][j]=='#' && s[i-1][j+1]=='#' && s[i][j-1]=='#' && s[i][j+1]=='#' && s[i+1][j-1]=='#' && s[i+1][j]=='#' && s[i+1][j+1]=='#')
            {
                cout<<"YES"<<endl;
                return 0;
            }
            else if (s[i][j]=='#' && s[i-1][j-1]=='#' && s[i-1][j]=='#' && s[i-1][j+1]=='#' && s[i][j-1]=='#' && s[i][j+1]=='#' && s[i+1][j-1]=='#' && s[i+1][j]=='#' && s[i+1][j+1]=='#')
            {
                cout<<"YES"<<endl;
                return 0;
            }
            else if (s[i][j]=='#' && s[i-1][j-1]=='.' && s[i-1][j]=='.' && s[i-1][j+1]=='.' && s[i][j-1]=='.' && s[i][j+1]=='.' && s[i+1][j-1]=='.' && s[i+1][j]=='.' && s[i+1][j+1]=='.')
            {
                cout<<"YES"<<endl;
                return 0;
            }
            else if (s[i][j]=='.' && s[i-1][j-1]=='.' && s[i-1][j]=='.' && s[i-1][j+1]=='.' && s[i][j-1]=='.' && s[i][j+1]=='.' && s[i+1][j-1]=='.' && s[i+1][j]=='.' && s[i+1][j+1]=='.')
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
