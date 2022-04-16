/// Create object

#include <iostream>
using namespace std;

class rectangle
{
    public:
    int height;
    int wight;
};

int main ()
{
    rectangle obj;
    obj.height = 5;
    obj.wight = 6;

    cout << "Area = "<<obj.height*obj.wight<<endl;

    return 0;
}
