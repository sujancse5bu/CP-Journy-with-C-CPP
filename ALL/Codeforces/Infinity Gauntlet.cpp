#include <iostream>
#include <string.h>
using namespace std;
int main ()
{
    int i,c,j,k,l;
    string p,m[9],o[6]={"Power","Time","Space","Soul","Reality","Mind"},n[6]={"purple","green","blue","orange","red","yellow"};
    cin>>c;
    i=0;
    while (i<c)
    {
        cin>>m[i];
        i++;
    }
    cout<<6-c<<endl;
    for (i=0;i<c;i++)
    {
        for (j=0;j<6;j++)
        {
            if (n[j]==m[i])
            {
                o[j]="zero";
                break;
            }
        }
    }
    for (i=0;i<6;i++)
    {
        if (o[i]!="zero") cout <<o[i]<<endl;
    }


    return 0;
}
