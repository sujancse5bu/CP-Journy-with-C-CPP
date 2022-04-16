///SHS
#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
    int i,j,k,n,l;
    string s;
    cin>>s>>n;
    l=s.size();
    if (l%2==0) l/=2;
    else l=l/2+1;
    for (i=0;i<n;i++)
    {
        cin>>k;
        k--;
        reverse (s.begin()+k,s.begin()+2*l-k);
    }
    cout<<s<<endl;
    return 0;
}
