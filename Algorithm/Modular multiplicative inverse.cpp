// C++ program to find modular inverse of a under modulo m
#include<iostream>
using namespace std;

// A naive method to find modulor multiplicative inverse of
// 'a' under modulo 'm'
void modInverse(int a, int m)
{
    a = a%m;
    cout<<a<<' ';
    for (int x=1; x<m; x++)
       if ((a*x) % m == 1)
          cout<<x;
    cout<<endl;
}

// Driver Program
int main()
{
    int a, m;
    while (1)
    {
        cin>>a>>m;
        modInverse(a,m);
    }
    return 0;
}
