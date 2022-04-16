///ShreeHarichad Smarane
#include <iostream>
using namespace std;
int abc (int a, int b=0) ///etai default sobsomoy sheshe thakbe
{
    return a+b;
}

main ()
{
    int x=9;
    cout<<abc (x)<<endl;
    cout<<abc (9,x)<<endl;


    return 0;
}
