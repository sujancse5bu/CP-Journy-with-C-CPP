
///ShreeHarichad Smarane
///Incoplete
#include <iostream>
#include <cstring>
using namespace std;
int main ()
{
    int i,n,g;
    char s[100000];
    cin>>s;
    n= strlen (s);
    for (i=1;i<n-1;i++)
    {
        g=2;
        if (i!=1) cout<<"=";
        for (int j=1;j<n-1;j++)
        {
            if (s[j]=='+' || s[j]=='-' || s[j]=='*' || s[j]=='/')
            {
                g=3;
                break;
            }
        }
        if (g==2)
        {
            for (int j=1;j<n-1;j++) if (s[j]!='a') cout<<s[j];
            return 0;
        }
        for (int j=1;j<n-1;j++)
        {
            if (s[j]=='/')
            {

            }
        }
        for (int j=1;j<n-1;j++) if (s[j]!='a') cout<<s[j];
        cout<<endl;
    }
    return 0;
}
