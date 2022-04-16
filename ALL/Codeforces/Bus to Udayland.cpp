////SHS
#include <iostream>
using namespace std;
int main ()
{
    int i,k,l,d,f=0,n;
    string s[1000];
    cin>>n;
    for (i=0;i<n;i++)
    {
        cin>>s[i];
        if (s[i][0]=='O' && s[i][1]=='O' && f==0)
        {
            s[i][0]='+';
            s[i][1]='+';
            f=1;
        }
        else if (s[i][3]=='O' && s[i][4]=='O' && f==0)
        {
            s[i][3]='+';
            s[i][4]='+';
            f=1;
        }

    }
    if (f==0) cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        for (i=0;i<n;i++) cout<<s[i]<<endl;
    }
    return 0;
}
