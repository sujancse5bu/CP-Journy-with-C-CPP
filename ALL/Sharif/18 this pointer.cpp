///ShreeHarichad Smarane
#include <iostream>
using namespace std;

class r
{
    int h;
    int w;
public:
    void set (int a, int b)
    {
        this->h=a;
        this->w=b;
    }
    int area ()
    {
        return h*w;
    }
};

int main ()
{
    r object;
    object.set(2,3);
    cout<<object.area()<<endl;




    return 0;
}
