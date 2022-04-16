///ShreeHarichad Smarane
#include <iostream>
using namespace std;

int add (int a, int b)
{
    return a+b;
}
float add (float a, float b)
{
    return (a+b)*2;
}
double add (double a, double b)
{
    return (a+b)*3;
}
int main ()
{
    cout<<add((float)7.5,(float)7.6)<<endl;



    return 0;
}
