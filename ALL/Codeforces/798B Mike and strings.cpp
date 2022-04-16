///SHS
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main ()
{
    int i,j,k,l,m,n;
    string a;
    char b;
    vector <string> s,t;
    cin>>n;
    for (i=0;i<n;i++)
    {
        cin>>a;
        s.push_back(a);
        t.push_back(a);
        sort (s[i].begin(),s[i].end());
        if (i>0 && s[i]!=s[i-1])
        {
            cout<<"-1"<<endl;
            return 0;
        }
    }
    l=s[0].size();
    for (i=0,j=l;i<n;i++)
    {
        for(k=l)
        {
            a.substr (1,5);
        }
    }



    return 0;
}
