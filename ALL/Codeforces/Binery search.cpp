#include<iostream>
using namespace std;
int main ()
{
    int a[]={1,3,4,5,7,23,34,35,47,56,58,62,78,79,82,89,93,100};
    int i,mi,li,hi,g;
    cin>>g;
    li=0;
    hi=17;
    i=0;
    while (i<10)
    {
        mi=(hi+li)/2;
        if (a[mi]==g)
        {
            cout<<"YES"<<endl;
            break;
        }
        else if (a[mi]>g) hi=mi;
        else li=mi;
        cout<<"li "<<li<<" mi "<<mi<<" hi "<<hi<<endl;
        i++;
    }
    return 0;
}
