///    OmShantiHari
///    Author: Sujan Mridha
///    CSE 5th batch, University of Barishal
#include <iostream>
using namespace std;
void TOH (int n, char sou, char aux, char tar)
{
     if(n!=0)
     {
         TOH (n-1,sou,tar,aux);
         cout<<n-1<<" "<<sou<<" "<<aux<<" "<<tar<<endl;
         TOH (n-1,aux,sou,tar);
     }
}
int main ()
{
    long long int a;
    char sou='A';
    char aux='B';
    char tar='C';
    cin>>a;
    TOH(a,sou,aux,tar);
    return 0;
}
