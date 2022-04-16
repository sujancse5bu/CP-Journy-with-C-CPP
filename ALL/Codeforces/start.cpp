#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a[]={2,4,1,3,6,5,7};
    for (int i=0;i<7;i++) cout<<a[i]<<" ";
    cout<<endl;
    sort(a,a+7);
    for (int i=0;i<7;i++) cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}
