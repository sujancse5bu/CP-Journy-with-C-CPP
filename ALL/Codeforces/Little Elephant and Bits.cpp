///ShreeHarichad Smarane
#include <iostream>
using namespace std;
int main ()
{
    int i,l,k=0;
    string s;
    cin>>s;
    l=s.size ();
    for (i=0;i<l;i++)
    {
        if (s[i]=='0')
        {
            s[i]='a';
            k=2;
            break;
        }
    }
    if (k==0) s[0]='a';
    for (i=0;i<l;i++) if (s[i]!='a') cout<<s[i];
    return 0;
}
