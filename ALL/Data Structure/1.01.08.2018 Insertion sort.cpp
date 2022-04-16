///OmShantiHari
#include <iostream>
#include <stdio.h>
using namespace std;
int input;
void Insertionsort (int A[]);
int main ()
{
    int A[100];
    freopen("class.txt","r",stdin);
    cin>>input;
    for (int i=0;i<input;i++) cin>>A[i];
    Insertionsort (A);
    return 0;
}
void Insertionsort (int A[])
{
    for (int j,i=1;i<input;i++)
    {
        int key=A[i];
        j=i-1;
        while (j>=0 && A[j]>key)
        {
            cout<<i<<" "<<j<<endl;
            A[j+1]=A[j];
            j--;
        }
        cout<<endl;
        A[j+1]=key;
    }
    for (int i=0;i<input;i++) cout<<A[i]<<" ";
}
