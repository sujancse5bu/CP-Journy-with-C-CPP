#include <iostream>
using namespace std;
int main ()
{
    int i,n;
    cin>>n;
    int a[n];
    for (i=0; i<n; i++) cin >>a[i];
    if (a[n-1]==0) cout<<"UP"<<endl;
    else if (a[n-1]==15) cout<<"DOWN"<<endl;
    else if (n==1) cout<<"-1"<<endl;
    else if (a[n-2]>a[n-1]) cout<<"DOWN"<<endl;
    else cout<<"UP"<<endl;
    return 0;
}
