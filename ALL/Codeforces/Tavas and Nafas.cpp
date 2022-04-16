///OmShantiHari
#include <iostream>
using namespace std;
void func1 (int a);
void func2 (int a);
int main ()
{
    int i,j,s,d,n;
    cin>>n;
    if (n==0) cout<<"zero";
    else if (n<20) func1 (n);
    else
    {
        d=n%10;
        n/=10;
        func2 (n);
        if (d!=0)
        {
            cout<<"-";
            func1(d);
        }
    }
    cout<<endl;
    return 0;
}
void func1 (int a)
{
    if (a==1) cout<<"one";
    else if (a==2) cout<<"two";
    else if (a==3) cout<<"three";
    else if (a==4) cout<<"four";
    else if (a==5) cout<<"five";
    else if (a==6) cout<<"six";
    else if (a==7) cout<<"seven";
    else if (a==8) cout<<"eight";
    else if (a==9) cout<<"nine";
    else if (a==10) cout<<"ten";
    else if (a==11) cout<<"eleven";
    else if (a==12) cout<<"twelve";
    else if (a==13) cout<<"thirteen";
    else if (a==14) cout<<"fourteen";
    else if (a==15) cout<<"fifteen";
    else if (a==16) cout<<"sixteen";
    else if (a==17) cout<<"seventeen";
    else if (a==18) cout<<"eighteen";
    else if (a==19) cout<<"nineteen";
}
void func2 (int a)
{
    if (a==2) cout<<"twenty";
    else if (a==3) cout<<"thirty";
    else if (a==4) cout<<"forty";
    else if (a==5) cout<<"fifty";
    else if (a==6) cout<<"sixty";
    else if (a==7) cout<<"seventy";
    else if (a==8) cout<<"eighty";
    else if (a==9) cout<<"ninety";
}
