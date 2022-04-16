///SHS
#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
    unsigned long long int i,l,p=0,k,m,n,j,h=0;
    string s,a,t,q;
    cin>>h;
    //cout<<i<<endl;
    if (h<=127) cout<<"byte"<<endl;
    else if (h<=32767) cout<<"short"<<endl;
    else if (h<=2147483647) cout<<"int"<<endl;
    else if (h<=9223372036854775807) cout<<"long"<<endl;
    else cout<<"BigInteger"<<endl;


    return 0;
}
//123456789101112131415161718192021222324
