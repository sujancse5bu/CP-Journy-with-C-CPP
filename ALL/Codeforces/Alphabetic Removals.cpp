///ShreeHarichad Smrane
#include <iostream>
using namespace std;
int main ()
{
    int i,n,k,j,b=0;
    string s;
    cin>>n>>k>>s;
    for (i=97,j=0;i<=122 && b<k;i++)
    {
        for (int l=0;l<n && b<k;l++)
        {
            if (s[l]==i)
            {
                s[l]='0';
                b++;
            }

        }
    }
    for (i=0;i<n;i++) if (s[i]!='0') cout<<s[i];
    return 0;
}
