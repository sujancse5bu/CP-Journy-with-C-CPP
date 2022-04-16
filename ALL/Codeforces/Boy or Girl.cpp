///SHS
#include <iostream>
#include <cstring>
using namespace std;
int main ()
{
    int i,n,m=0,x[124]={0};
    char s[200];
    cin>>s;
    n= strlen (s);
    for (i=0;i<n;i++) x[s[i]]++;
    for (i=0;i<124;i++) if (x[i]>0) m++;
    if (m%2==1) cout<<"IGNORE HIM!";
    else cout<<"CHAT WITH HER!";
    return 0;
}
