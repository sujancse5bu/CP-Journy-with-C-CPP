///ShreeHarichad Smarane
#include <iostream>
using namespace std;
int main ()
{
    int i=0,d,n,k=1;
    string s;
    cin>>d>>s;
    while (i<d-1)
    {
        if (s[i]=='R' && s[i+1]=='U') i+=2;
        else if (s[i]=='U' && s[i+1]=='R') i+=2;
        else i++;
        if (i>=d) break;
        k++;
    }
    cout<<k<<endl;
    return 0;
}
