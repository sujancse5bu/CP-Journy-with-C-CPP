/// Inline Function

#include <iostream>
using namespace std;

class rectengle {
public:
    int h;
    int w;
    int area();

};
inline int rectengle::area ()
{
    return h*w;
}
int main ()
{
    rectengle obj;
    obj.h=5;
    obj.w=6;


    cout<<"Area = "<<obj.area()<<endl;



    return 0;
}
