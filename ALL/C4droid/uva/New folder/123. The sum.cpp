///ShreeHarichad Smarane
#include <iostream>
using namespace std;
int main ()
{
    long long int i=1,a=0,b=1,c=1,n;
    cin>>n;
    while (i<=n)
    {
        c=a+b;
        a=b;
        b=c;
        i++;
        cout<<c<<endl;
    }
    return 0;
}
