///ShreeHarichad Smarane
#include <iostream>
using namespace std;
class exconst
{
public:
    int a;
    int change (int x ) const
    {
        x+=a;
        return a;
    }
};
int main ()
{
    int i=0;
    const int& r=i;
    const int c=263487;
    //c=4;
cout<<"Sujan"<<endl;

    return 0;
}
