///SHREEHARICHADSMARANE
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int d[200];
int main ()
{
    int i,j,l,n,a,b,s[6]={0};
    char c[100005];
    cin>>c;
    j=strlen (c);
    for (i=0;i<j;i++)
    {
        if(c[i]=='B') s[0]++;
        else if (c[i]=='u') s[1]++;
        else if (c[i]=='l') s[2]++;
        else if (c[i]=='a') s[3]++;
        else if (c[i]=='s') s[4]++;
        else if (c[i]=='r') s[5]++;
    }
    //for (i=0;i<6;i++) cout<<s[i]<<" ";
    s[1]/=2;
    s[3]/=2;
    sort (s,s+6);
    cout<<s[0]<<endl;
    return 0;
}
