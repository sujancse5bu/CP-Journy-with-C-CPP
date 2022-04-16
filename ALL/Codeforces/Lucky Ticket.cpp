///ShreeHarichad Smarane
#include <iostream>
using namespace std;
int main ()
{
    int i,n,l,a=0,b=0;
    string s;
    cin>>n>>s;
    for (i=0;i<n;i++)
    {
        if (i<n/2) a+=s[i]-48;
        else b+=s[i]-48;
        if (s[i]!='4' && s[i]!='7')
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    if (a==b) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
