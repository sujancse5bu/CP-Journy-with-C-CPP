///SHS
#include <iostream>
#include <cstring>
using namespace std;
int main ()
{
    int i,n,k,l;
    char  s[202];
    cin>>s;
    l=strlen(s);
    for (i=0;i<l;)
    {

        if (s[i]=='W' && s[i+1]=='U' && s[i+2]=='B' && i!=0 && (i+3)!=n-1)
        {
            cout<<" ";
            i+=3;
        }
        else if (s[i]=='W' && s[i+1]=='U' && s[i+2]=='B') i+=3;
        else
        {
            cout<<s[i];
            i++;
        }
    }
    return 0;
}
