///Shree Harichad Smrane
#include <iostream>
using namespace std;
int main ()
{
    int i=0,n,r=0,v,u=0,t=0,a=0;
    string s;
    cin>>n>>s;
    if (s[i]=='R') t=0;
    else t=1;
    for (i=0;i<n;i++)
    {
        if (s[i]=='U') u++;
        else r++;
        if (i>0 && r!=u  && r>0 && u>0)
        {
            if (s[i]==s[i-1])
            {
                if (a%2==t)
                {
                    if (u>r) a++;
                }
                else
                {
                    if (r>u) a++;
                }
            }
        }
    }
    cout<<a<<endl;
    return 0;
}
