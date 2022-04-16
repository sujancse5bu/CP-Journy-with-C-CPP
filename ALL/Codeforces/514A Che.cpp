#include <iostream>
using namespace std;

int main()
{

    long long int x,d,j,l[30],i=0;
    cin>>x;
    i=0;
    while (x>0)
    {
        d=x%10;
        x=x/10;
        if (x==0  && d==9) {}
        else if (d>4 && d<10) d=9-d;
        l[i]=d;
        i++;
    }
    for (j=i-1;j>=0;j--) cout<<l[j];
    cout<<endl;
    return 0;
}
