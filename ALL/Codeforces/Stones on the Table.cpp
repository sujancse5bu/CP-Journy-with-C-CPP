#include <iostream>
using namespace std;
int main ()
{
    int n,s=0;
    string m;
    cin>>n>>m;
    if (n==1)
    {
        cout<<"0"<<endl;
        return 0;
    }
    for (int i=0;i<n-1;i++)
    {
        if (m[i]==m[i+1]) s++;
    }
    cout<<s<<endl;
    return 0;
}
