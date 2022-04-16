///ShreeHarichad Smarane
#include <iostream>
using namespace std;
int main ()
{
    int i,n,t,v;
    string s;
    cin>>n>>t>>s;
    for (i=0;i<t;i++)
    {
        v=1;
        while (v<n)
        {
            if (s[v-1]=='B' && s[v]=='G')
            {
                s[v-1]='G';
                s[v]='B';
                v++;
            }
            v++;
        }
    }
    cout<<s<<endl;
    return 0;
}
