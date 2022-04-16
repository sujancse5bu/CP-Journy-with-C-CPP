///SHS
#include <iostream>
using namespace std;
int main ()
{
    long long int n,k;
    cin>>n;
    k=n%10;
    if (k>5) n+=10-k;
    else n-=k;
    cout<<n<<endl;
    return 0;
}
