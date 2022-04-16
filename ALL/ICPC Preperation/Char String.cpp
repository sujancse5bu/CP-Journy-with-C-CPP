#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <string>  ///
#include <cstring>
using namespace std;
int main ()
{
    char s[1000000];
    string a,b="Sujan";
    cin>>s;
    getline (cin,a); /// for input  space
    sort (a.begin(),a.end()); /// c++ e sort
    sort (s,s+strlen(s)); /// c e sort
    reverse (a.begin(),a.end());
    a.substr (1,5);     /// s string er 1 index theke start korbe and substring er length 5 hihebe check korbe
    // another method
    /*if (a.find(b)!=string::npos) /// Khuje pele dhukbe
    {
        cout<<"found"<<endl<<endl;

    }
    if (a.find(b)==string::npos) /// Khuje na pele dhukbe
    {
        cout<<"Not found"<<endl<<endl;

    }

    cout<<a<<endl;*/
    return 0;
}


