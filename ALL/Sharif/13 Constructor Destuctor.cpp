/// Constructor Destructor

#include <iostream>
using namespace std;

class rectangle
{
    int height;
    int wight;
public:
    void set (int h, int w);
    int area ();
    rectangle(int h, int w);
    ~rectangle();
};
int rectangle ::area()
{
    return height*wight;
}
rectangle::rectangle(int h, int w)
{
    height=h;
    wight=w;
    cout<<"Constructor "<<area()<<endl;
}
rectangle::~rectangle()
{
    cout<<"Destructor "<<area()<<endl;
}
int main ()
{
    rectangle obj(6,7),obj1(1,2);
    cout<<"Area = "<<obj.area()<<endl;
    return 0;
}
