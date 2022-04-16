#include <iostream>
using namespace std;
int main ()
{
    int i=1;
    string d;
    while (1)
    {
        cin>>d;
        if (d[0]=='*') return 0;
        else if (d[0]=='U') cout<<"Case "<<i<<": Hajj-e-Asghar"<<endl;
        else cout<<"Case "<<i<<": Hajj-e-Akbar"<<endl;
        i++;
    }
}
