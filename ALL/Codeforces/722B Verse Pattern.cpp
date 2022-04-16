///SHS
#include <iostream>
#include <cstring>
#include <stdio.h>
using namespace std;
int main ()
{
    int i,j,k,m,n,a[200],l;
    char s[100][102];
    cin>>n;
    for (i=0;i<n;i++) cin>>a[i];
    getchar ();
    for (i=0;i<n;i++) gets (s[i]);

    for (i=0;i<n;i++)

    {

        l=strlen (s[i]);
        for (j=0,k=0;j<l;j++) if (s[i][j]=='a' || s[i][j]=='e' || s[i][j]=='i' || s[i][j]=='o' || s[i][j]=='u' || s[i][j]=='y') k++;
        if (k!=a[i])
        {
            cout<<"NO"<<endl;
            return 0;
        }

    }
    cout<<"YES"<<endl;
    return 0;
}


