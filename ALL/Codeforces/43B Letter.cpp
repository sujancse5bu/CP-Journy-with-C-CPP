#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
    int i,j,k,l1,l2,m,n,s;
    string s1,s2;
    getline (cin,s1);
    getline (cin,s2);
    l1=s1.size();
    l2=s2.size();
    for (i=0;i<l2;i++)
    {
        if (s2[i]!=' ')
        {
            for (j=0,m=0;j<l1;j++)
            {

                if (s1[j]==s2[i])
                {
                    s1[j]=' ';
                    m=1;
                    break;
                }
                //else cout<<s2[i]<<endl;
            }
            if (m==0)
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
