#include <iostream>
#include <cmath>
#include <cfenv>
using namespace std;

int main()
{
    // by default, rounding direction is to-nearest i.e. fesetround(FE_TONEAREST)
    double x = 11.87;
    long long int result;
    result = llrint(x);
    cout << "Rounding to-nearest (" << x << ") = " << result << endl;

    // mid-way values are rounded off to higher integer
    x = 11.5;
    result = llrint(x);
    cout << "Rounding to-nearest (" << x << ") = " << result << endl;

    // setting rounding direction to DOWNWARD
    fesetround(FE_DOWNWARD);
    x = 11.87;
    result = llrint(x);
    cout << "Rounding downward (" << x << ") = " << result << endl;

    // setting rounding direction to UPWARD
    fesetround(FE_UPWARD);
    x = 33.32;
    result = llrint(x);
    cout << "Rounding upward (" << x << ") = " << result << endl;

    return 0;
}
