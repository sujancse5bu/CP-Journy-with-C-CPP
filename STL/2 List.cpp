///    OmShantihari
///    Author: Sujan Mridha
///    CSE 5th batch, University of Barishal
#include <iostream>
#include <list>
#include <iterator>
using namespace std;
int main ()
{
    list <float> a; //declaration
    list <float> :: iterator it; //iterator declaration
    a.push_back (10); // insert in last 
    a.push_back (15);
    a.push_front (5); // insert in first
    a.push_front (20); ///extra from vector
    a.push_back (30);
    for (it=a.begin();it!=a.end();it++) cout<<*it<<" ";
    a.reverse ();
    cout<<endl;
    cout<<"The Reversed List: ";
    for (it=a.begin();it!=a.end();it++) cout<<*it<<" ";
    cout<<endl;
    
    int f=a.front(); //returns a direct reference to the first element
    cout<<"First elemnet: "<<f<<endl; 
    
    f=a.back(); //returns a direct reference to the last element
    cout<<"Last elemnet: "<<f<<endl; 
    
    a.pop_back(); //erases the last element;
    a.pop_front(); //erases the first element;
    cout<<"The deletion the first & Last Element: ";
    for (it=a.begin();it!=a.end();it++) cout<<*it<<" ";
    cout<<endl;
    
    /*sort (a.begin(),a.end());
    cout<<"Sorted List: ";
    for (it=a.begin();it!=a.end();it++) cout<<*it<<" ";
    cout<<endl;*/
    f=a.empty();//returns 1 if list a is empty;
    cout<<"List a is Empty: "<<f<<endl; // 0 means not empty
    
    cout<<"Assigned & Inserted List: ";
    a.assign(3, 2); //list is resized & 2 is inserted three times
    a.insert(a.end(),10,6); //6 is inserted 10 times in the end of list
    for (it=a.begin();it!=a.end();it++) cout<<*it<<" ";
    cout<<endl;
    
    a.erase(a.begin());
    for (it=a.begin();it!=a.end();it++) cout<<*it<<" ";
    cout<<endl;
    
    
    
    
    
    
    
    
    return 0;
}

