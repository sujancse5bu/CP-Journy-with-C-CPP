// C++ code to demonstrate working of array, 
// to() and get() 
#include<iostream> 
#include<array> // for array, at() 
#include<tuple> // for get() 
using namespace std; 
int main() 
{ 
    // Initializing the array elements 
    array<int,6> ar = {1, 2, 3, 4, 5, 6}; 
  
    // Printing array elements using at() 
    cout << "The array elements are (using at()) : "; 
    for ( int i=0; i<6; i++) 
    cout << ar.at(i) << " "; 
    cout << endl; 
  
    // Printing array elements using get() 
    cout << "The array elements are (using get()) : "; 
    cout << get<0>(ar) << " " << get<1>(ar) << " "; 
    cout << get<2>(ar) << " " << get<3>(ar) << " "; 
    cout << get<4>(ar) << " " << get<5>(ar) << " "; 
    cout << endl; 
  
    // Printing array elements using operator[] 
    cout << "The array elements are (using operator[]) : "; 
    for ( int i=0; i<6; i++) 
    cout << ar[i] << " "; 
    cout << endl; 
  
    return 0; 
  
}
/*
Array class in C++
The introduction of array class from C++11 has offered a better alternative for C-style arrays. The advantages of array class over C-style array are :-

Array classes knows its own size, whereas C-style arrays lack this property. So when passing to functions, we don’t need to pass size of Array as a separate parameter.
With C-style array there is more risk of array being decayed into a pointer. Array classes don’t decay into pointers
Array classes are generally more efficient, light-weight and reliable than C-style arrays.
*/


/*
Operations on array :-
1. at() :- This function is used to access the elements of array.
2. get() :- This function is also used to access the elements of array. This function is not the member of array class but overloaded function from class tuple.
3. operator[] :- This is similar to C-style arrays. This method is also used to access array elements.

*/
