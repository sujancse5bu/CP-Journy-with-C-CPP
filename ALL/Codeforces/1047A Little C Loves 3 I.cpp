/*
************************************************
***               OmShantihari               ***
***           Author: Sujan Mridha           ***
***   CSE 5th batch, University of Barishal  ***
************************************************
*/
#include <iostream>
#include <algorithm>
#include<vector>
#define lli long long int
using namespace std;
int main ()
{
    lli i,j,n,k,c;
    cin>>n;
    cout<<1<<" ";
    n--;
    if (n%3==2)
    {
        cout<<1<<" ";
        n--;
    }
    else
    {
        cout<<2<<" ";
        n-=2;
    }
    cout<<n<<endl;

    return 0;
}
