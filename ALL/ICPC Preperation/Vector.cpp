//#include <bits/stdc++.h>
#include <iostream>
#include <vector> /// begin(),end(),size(),rbegin(), rend(), clear(),erase (), reverse (), front (), back (), swap (), sort ();
using namespace std;
int main ()
{
    vector <int> a;
    int i,p,q;
    for (i=0;i<10;i++)
    {
        cin>>p;
        a.push_back(p);
    }
    cout<<*(a.begin()+2)<<endl;
    a.erase(a.begin()+3);
    a.erase(a.begin()+1,a.begin()+3);
    a.reverse(a.begin(),a.end());
    a.reverse(a.begin(),a.begin()+3);
    swap(a[0],a[3]); /// algorithm lagbe
    sort(a.begin(),a.end()); /// algorithm lagbe
    sort(a.begin(),a.begin()+5); /// choto theke boro
    sort (a.begin(),a.end(),greater<int>());/// boro theke choto
    sort (a.begin(),a.end(),functions name); /// kono functioner viktite sort korte hole


    *max_element(a.begin(),a.end());/// max element ber korte hole
    *min_element(a.begin(),a.end());/// min element ber korte hole
    count(a.begin(),a.end(),3); /// 3 koto bar ache
    q=accumulate(a.begin(),a.end(),0); /// 0 holo sum,q er initial man;
    a.erase(unique(a.begin(),a.end()),a.end()); /// shudu unique man rakhar jonno
    lower_bound(a.begin(),a.end(),2); /// sorted hote hobe,, 2 er lowest index
    upper_bound(a.begin(),a.end(),2); /// sorted hote hobe,, 2 er highest index






    return 0;
}
