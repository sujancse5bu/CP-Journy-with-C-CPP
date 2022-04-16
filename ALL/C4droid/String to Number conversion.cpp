/// ShreeHarichad Smarane
#include <iostream>
using namespace std;
int main ()
{
    int i=0,a,s=0;
    string d;
    cin>>d;
    while (1)
    {
        s+=d[i]-64;
        i++;
        if (d[i]>=65) s*=26;
        else break;
    }
    cout<<"R";
    while (d[i]!=NULL)
    {
        cout<<d[i];
        i++;
    }
    cout<<"C"<<s<<endl;
    return 0;
}
