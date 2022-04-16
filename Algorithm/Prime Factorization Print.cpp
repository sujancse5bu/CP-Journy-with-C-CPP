// C++ program to print all prime factors  
#include <bits/stdc++.h> 
using namespace std;
void primeFactors(int n)  // A function to print all prime factors of a given number n  
{  
    while (n % 2 == 0)  // Print the number of 2s that divide n  
    {  
        cout << 2 << " ";  
        n = n/2;  
    }  
    for (int i = 3; i <= sqrt(n); i = i + 2) // n must be odd at this point. So we can skip one element (Note i = i +2)  
    {  
        while (n % i == 0)   // While i divides n, print i and divide n 
        {  
            cout << i << " ";  
            n = n/i;  
        }  
    }  
    if (n > 2)  cout << n << " ";  // This condition is to handle the case when n is a prime number greater than 2  
}  
int main()  /* Driver code */
{  
    int n = 315;  
    primeFactors(n);  
    return 0;  
}  
  
// This is code is contributed by rathbhupendra 
