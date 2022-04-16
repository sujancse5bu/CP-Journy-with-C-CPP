
#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
    long int n;
    cin>>n;
    if (n==0) cout<<"1"<<endl;
    else if (n%100==10) cout<<pow(8,10)%10<<endl;
    else cout<<pow(8,n%10)%10<<endl;
    return 0;
}
