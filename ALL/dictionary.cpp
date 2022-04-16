
// Author: Gopal Pandurangan
// Program to illustrate dictionary data structure --- in particular hash table.
// Uses ``unordered_map" STL data structure for hash table --- this is a C++11 standard and may not be present in earlier C++ versions
// One can use just ``map" instead if you are using an earlier C++ version. map also implements a dictionary data structure, but does not use
// hash table (internally) to implement the dictionary.

// This program takes a list of numbers and counts the frequency of each number.


#include <iostream>
#include <unordered_map>
using namespace std;

int main ()
{
    unordered_map<int,int> mymap; // take two parameters, both of type int. The first is the key, the second is the value
    
    int input; 
	
	  cout << "Input a list of numbers separated by a space\n";
	  cout << "To end the list enter 0" << endl;
	
	  while (cin >> input) {
    if (input == 0) break; //exit the loop if 0 is typed
    if (mymap.find(input) == mymap.end()) //check if the number is already entered
        mymap[input] = 1; // if no then enter into the has table using input as a key with count = 1.
    else
        mymap[input]++; // Otherwise, increment the count.
	 }
    
    cout << "mymap has:"; //outputs the frequencies of the input integers
    for (auto it = mymap.begin(); it != mymap.end(); ++it )
        // auto is a convenient feature of C++11. It automatically computes the type of the declared variable
        // alternatively one should declare: unordered_map<int,int>::iterator it
        cout << " " << (*it).first << ":" << (*it).second;
    cout << endl;
    
    cout << "mymap's buckets are:" << endl; // this shows how the key-value pairs are stored in the hash table internally
    for (unsigned i = 0; i < mymap.bucket_count(); ++i) {
        cout << "bucket #" << i << " has:";
        for ( auto it1 = mymap.begin(i); it1 != mymap.end(i); ++it1 )
            cout << " " << (*it1).first << ":" << (*it1).second;
        cout << endl;
    }
    return 0;
}

