#include <iostream>
using namespace std;

class rectengle {
    int h;
    int w;
public:
    int area();
    void set (int a,int b);
};
class rectengle1 {
    int h;
    int w;
public:
    int area();
    void set (int a,int b);
};
inline int rectengle::area ()
{
    return h*w;
}
inline int rectengle1::area ()
{
    return h*w;
}
void rectengle::set (int a,int b)
{
    h=a;
    w=b;
}
void rectengle1::set (int a,int b)
{
    h=a;
    w=b;
}
int main ()
{
    rectengle obj;
    rectengle1 mair;
    obj.set (2,3);
    mair.set (5,6);
    cout<<"Area = "<<obj.area()<<endl;
    cout<<"Area = "<<mair.area()<<endl;
    //mair = obj;
    cout<<"Area = "<<obj.area()<<endl;
    cout<<"Area = "<<mair.area()<<endl;
    return 0;
}

