///SHS
#include <iostream>
using namespace std;
int main ()
{
    string s;
    int i,n,l;
    cin>>l>>s;
    if (l==8) cout<<"vaporeon"<<endl;
    else if (l==6) cout<<"espeon"<<endl;
    else if (s[0]=='j'  || s[1]=='o' || s[2]=='l' || s[3]=='t' ) cout<<"jolteon"<<endl;
    else if (s[0]=='f'  || s[1]=='l' || s[2]=='a' || s[3]=='r' ) cout<<"flareon"<<endl;
    else if (s[0]=='u'  || s[1]=='m' || s[2]=='b' || s[3]=='r' ) cout<<"umbreon"<<endl;
    else if (s[0]=='g'  || s[1]=='l' || s[2]=='a' || s[3]=='c' ) cout<<"glaceon"<<endl;
    else if (s[0]=='s'  || s[1]=='y' || s[2]=='l' || s[3]=='v' ) cout<<"sylveon"<<endl;
    else cout<<"Jolteon"<<endl;
    return 0;
}
