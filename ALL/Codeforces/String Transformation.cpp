///ShreeHarichad SMrane
#include <iostream>
using namespace std;
int main ()
{
    int i=0,j=97;
    string s;
    cin>>s;
    while (s[i]!=NULL)
    {
        if (j==123) j=97;
        else if (s[i]!=j)
        {
            s[i]=s[i]+1;
            if (s[i]!=j)
            {
                cout<<"-1"<<endl;
                return 0;
            }
        }
        if (j!=123) j++;
        i++;
    }
    cout<<s;
    return 0;
}
