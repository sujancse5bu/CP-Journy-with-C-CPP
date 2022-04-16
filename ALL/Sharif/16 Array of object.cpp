///SHS
#include <iostream>
using namespace std;

class rectangle {
    int h;
    int w;
public:
    rectangle (int a, int b) {h=a;w=b;}
    int area () {return h*w;}
};

int main ()
{
    rectangle ssss[4]={rectangle (1,3),rectangle (3,3),rectangle (5,3),rectangle (7,3)};

    for (int i=0;i<4;i++)
        cout<<i+1<<"="<<ssss[i].area()<<endl;


    return 0;
}
