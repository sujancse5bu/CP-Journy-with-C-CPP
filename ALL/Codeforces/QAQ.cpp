///SHS
#include <iostream>
using namespace std;
int main ()
{
    int i,j,k,l,n=0;
    string s;
    cin>>s;
    l=s.length();
    for (i=0;i<l;i++)
    {
        if (s[i]=='Q')
        {
            for (j=i+1;j<l;j++)
            {
                if (s[j]=='A')
                {
                    for (k=j+1;k<l;k++) if (s[k]=='Q') n++;
                }
            }
        }
    }
    cout<<n<<endl;
    return 0;
}
