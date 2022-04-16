///ShreeHarichad Smrane
#include <iostream>
using namespace std;
int main ()
{
    int i=0,n,f=0,t;
    string s;
    cin>>n>>s;
    while (i<n-1)
    {
        if (s[i]=='C' && s[i+1]=='C') f=3;
        else if (s[i]=='M' && s[i+1]=='M') f=3;
        else if (s[i]=='Y' && s[i+1]=='Y') f=3;
        if (f==3) break;
        i++;
    }
    if (f==3) cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
    return 0;
}
