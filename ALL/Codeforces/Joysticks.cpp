/// SreeHarichad Smarane
#include <iostream>
using namespace std;
int main ()
{
    int i,m,n,s=0;
    cin>>m>>n;
    if (n>m) swap (m,n);
    if (m==1 && n==1)
    {
        cout<<s<<endl;
        return 0;
    }
    while (1)
    {
        while (1)
        {
            if (m<=2) break;
            m-=2;
            n++;
            s++;
        }

        while (1)
        {
            if (n<=2) break;
            n-=2;
            m++;
            s++;
        }
        if (m<=2 && n<=2) break;
    }
    cout<<s+1<<endl;
    return 0;
}
