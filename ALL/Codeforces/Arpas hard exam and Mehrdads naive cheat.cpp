#include <iostream>
using namespace std;
int main ()
{
    long int n,s;
    cin>>s;
    n=s%10;
    if (s==0) cout<<"1"<<endl;
    else if (n==1 || n==5 || n==9) cout<<"8"<<endl;
    else if (n==2 || n==6) cout<<"4"<<endl;
    else if (n==3 || n==7) cout<<"2"<<endl;
    else cout<<"6"<<endl;
    return 0;
}
