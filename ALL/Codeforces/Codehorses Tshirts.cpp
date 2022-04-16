///ShreeHarichad Smrane
#include <iostream>
#include <cstring>
using namespace std;
int main ()
{
    int i,n,k,j,b=0;
    cin>>n;
    char  s1[100][10000],s2[100][10000],sp[]="0000";
    for (i=0;i<n;i++) cin>>s1[i];
    for (i=0;i<n;i++)
    {
        cin>>s2[i];
        for (j=0;j<n;j++)
        {
            if (strcmp(s2[i],s1[j])==0)
            {
                b++;
                s2[i][0]='0';
                s1[j][0]='1';
            }
        }
    }
    cout<<n-b;
    return 0;
}

