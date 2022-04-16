///ShreeHArichad Smarane
#include <iostream>
using namespace std;
int main ()
{
    int i,n,a,x=0,y=0,z=0;
    cin>>n;
    for (i=0;i<n;i++)
    {
        cin>>a;
        if (i%3==0) x+=a;
        else if (i%3==1) y+=a;
        else z+=a;
    }
    if (x>=y && x>=z) cout<<"chest"<<endl;
    else if (y>=x && y>=z) cout<<"biceps"<<endl;
    else cout<<"back"<<endl;
    return 0;
}
