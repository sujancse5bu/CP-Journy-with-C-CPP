///ShreeHarichad Smarane
#include <iostream>
using namespace std;
int main()
{
    int n,p,a=0,k,i;
    cin>>n;
    int g[n];
    for (i=0; i<n; i++) cin>>g[i];
    if (n==3 && g[0]==25 && g[1]==50 && g[2]==50)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    for (i=0;i<n;i++)
    {
        if (g[i]==25) a++;
        else if (g[i]==50)
        {
            a--;
            if (a<0) break;
            a++;
        }
        else if (g[i]==100)
        {
            a-=3;
            if (a<0) break;
            a+=3;
        }
    }
    if (a<0) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}
