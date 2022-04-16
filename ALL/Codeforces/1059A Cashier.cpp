#include <iostream>
using namespace std;
int main ()
{
    long long int i,a,k,l,c,s,m,n,b;
    cin>>n>>l>>a;
    long long int j[n];
    for (i=0,k=0,b=0,c=0,m=0;i<n;i++)
    {
        cin>>b>>m;
        j[i]=b-(k+c);
        k=b;
        c=m;
    }
    for (i=0,s=0;i<n;i++) s+=j[i]/a;
    l-=(k+c);
    s+=l/a;
    cout<<s<<endl;



    return 0;
}
