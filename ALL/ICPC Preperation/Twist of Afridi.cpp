///    OmShantihari
///    Author: Sujan Mridha
///    CSE 5th batch, University of Barishal
#include <iostream>
using namespace std;
int main ()
{
    int i,j,l,n;
    string a;
    char b;
    cin>>n>>a;
    for (i=0,j=0,l=0;i<n;i++)
    {
        if (a[i]!='a' && a[i]!='e' && a[i]!='i' && a[i]!='o' && a[i]!='u')
        {
            l=1;
            if (j%2==0)
            {
                if (a[i]=='a') cout<<"z";
                else
                {
                    b=a[i]-1;
                    cout<<b;
                }
            }
            else
            {
                if (a[i]=='z') cout<<"a";
                else
                {
                    b=a[i]+1;
                    cout<<b;
                }
            }
            j++;
        }
    }
    if (l==0) cout<<"Eida Kisu Hoilo!";
    cout<<endl;
    return 0;
}
