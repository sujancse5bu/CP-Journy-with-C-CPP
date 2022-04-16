///SHS
#include<iostream>
using namespace std;
int main ()
{
    long int i,j,na,nb,k,m;
    cin>>na>>nb>>k>>m;
    for (i=0;i<na+nb;i++) cin>>j;
    if (na>k && nb>m) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
