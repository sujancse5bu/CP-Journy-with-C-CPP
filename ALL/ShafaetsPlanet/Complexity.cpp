///    OmShantihari
///    Author: Sujan Mridha
///    CSE 5th batch, University of Barishal
#include <iostream>
using namespace std;
int myAlgorithm3(int n);
int myAlgorithm4(int n,int *val,int key);
int main ()
{
    int n;
    cin>>n;
    cout<<myAlgorithm3(n)<<endl;
    return 0;
}

int myAlgorithm3(int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j++)
        {
            sum+=(i+j);
        }
    }
    return sum;
}
int myAlgorithm4(int n,int *val,int key)
{
    int low=1,high=n;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(key<val[mid]) low=mid-1;
        if(key>val[mid]) high=mid+1;
        if(key==val[mid]) return 1;
    }
    return 0;
}













if (s[i]==t[j])
            {
                a[k]++;
                i++;
            }
            else
            {
                k++;
                break;
            }
