/* OmShantihari; Author: Sujan Mridha, CSE 5th batch, University of Barishal */
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main ()
{
    long long int n,k,b;
    cin>>n>>k;
    vector <long long int> a;
    for (int i=0;i<n;i++)
    {
        cin>>b;
        a.push_back(b);
    }
    sort(a.begin(),a.end());
    if (k==0)
    {
        if (a[0]==1) cout<<-1<<endl;
        else cout<<1<<endl;
    }
    else if (a[k-1]==1000000000) cout<<a[k-1]<<endl;
    else if (a[k]-a[k-1]<2) cout<<-1<<endl;
    else cout<<a[k-1]+1<<endl;
    return 0;
}
