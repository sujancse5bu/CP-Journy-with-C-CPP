///SHREEhARICHAD SMARANE
#include <iostream>
#include <cstring>
using namespace std;
int main ()
{
    int i,j,k,s=0;
    char t[120];
    cin>>t;
    k=strlen (t)-2;
    for (i=0;i<k;i++)
    {
        if (t[i]=='A')
        {
            if (t[i+1]=='B' && t[i+2]=='C') s=2;
            else if (t[i+1]=='C' && t[i+2]=='B') s=2;
        }
        else if (t[i]=='B')
        {
            if (t[i+1]=='A' && t[i+2]=='C') s=2;
            else if (t[i+1]=='C' && t[i+2]=='A') s=2;
        }
        else if (t[i]=='C')
        {
            if (t[i+1]=='A' && t[i+2]=='B') s=2;
            else if (t[i+1]=='B' && t[i+2]=='A') s=2;
        }
        if (s==2) break;
    }
    if (s==2) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}
