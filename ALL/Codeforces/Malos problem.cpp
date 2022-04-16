#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
    int i,f,l[100];
    cin>>f;
    for (i=0;i<f;i++) cin>>l[i];
    sort (l,l+f);
    cout<<l[f-3];
    return 0;
}
