///    OmShantihari
///    Author: Sujan Mridha
///    CSE 5th batch, University of Barishal
#include <iostream>
#include <vector>
#include <iterator>
#include <stdio.h>
#include <algorithm>
using namespace std;
bool mf (int a, int b);
int main ()
{

cout<<"Iterators:"<<endl;
	vector <int> v1;/// Declaration
	vector <int>::iterator it,it1;
	v1.push_back(5);
	v1.push_back(3);//Last e data insertion
	//begin()
	//returns a bidirectional iterator pointing to the first element.
	//end()
	//returns a bidirectional iterator pointing to the last element.
	for (it=v1.begin();it!=v1.end();++it) cout<<' '<<*it; 
	cout<<endl;
cout<<endl<<"Assign:"<<endl;
	v1.clear();
	v1.push_back(5);
	v1.push_back(3);
	
	v1.assign(7,100);
	
	for (int i=0;i<v1.size();i++) cout<<v1[i]<<' ';
	cout<<endl;
	
	
	int a[]={0,1,2,3,4,5};
	v1.assign(a,a+6);
	for (int i=0;i<v1.size();i++) cout<<v1[i]<<' ';
	cout<<endl;
	
	vector <int> v2(4,-1); //size==4
	v1.assign(v2.begin(),v2.begin()+4);
	for (int i=0;i<v1.size();i++) cout<<v1[i]<<' ';
	cout<<endl;
	
cout<<endl<<"Insert:"<<endl; //Syntax: vector_name.insert (position, val);
	for (int i=0;i<v1.size();i++) cout<<v1[i]<<' ';
	cout<<endl;
	
	it= v2.insert(v2.begin(), 3); //returns newly inserted index
	v2.insert(it,2); //(position, val)
	v2.insert(it+2,5,10);  //(position,number_of_insertion,val)
	
	for (int i=0;i<v2.size();i++) cout<<v2[i]<<' ';
	cout<<endl;
cout<<endl<<"Delete:"<<endl;  //v_name.clear() makes size=0;
	//Removing elements within a range
	for (int i=0;i<v2.size();i++) cout<<v2[i]<<' ';
	cout<<endl;
	v2.erase(v2.begin()+2,v2.end()-4); 
	for (int i=0;i<v2.size();i++) cout<<v2[i]<<' ';
	cout<<endl;
	
	
cout<<endl<<"Emplace:"<<endl; //as insert operation
	for (int i=0;i<v2.size();i++) cout<<v2[i]<<' ';
	cout<<endl;
	
	//not working in dev c++ :'(
	
cout<<endl<<"Sorting:"<<endl;
	vector <int> y;
    vector <int>::iterator z;
    //z=y.begin(); iterator assign o sort  er age pore jekono somoy use kora jay.
    y.push_back(23);
    y.push_back(12);
    y.push_back(744);
    y.push_back(45);
    y.push_back(32);
    y.push_back(432);
    y.push_back(80);
    y.push_back(29);
    y.push_back(768);
    y.push_back(7079);
    y.push_back(334);
    y.push_back(323);
    //z=y.begin();
    sort (y.begin(),y.end(),mf); // for all sort.
    sort (y.begin(),y.begin()+4); // first 4 element sort
    z=y.begin();
    for (z=y.begin();z!=y.end();z++) cout<<*z<<" ";
    cout<<endl;
	
	
    return 0;
}

bool mf (int a, int b)
{
    return a>b;
}
/*


    
    vector <int> v;/// Declare
    
    v.push_back(10); //v[0]=10;//addition in the last
    v.push_back(34); //v[1]=34;
    v.push_back(1); //v[2]=11;
    v.push_back(5);
    v.push_back(2);
    v.push_back(30);
    
    for (int i=0;i<v.size();i++) cout<<v[i]<<' ';
    cout<<endl;
    sort (v.begin()+2,v.begin()+5);
    
    for (int i=0;i<v.size();i++) cout<<v[i]<<' ';
    cout<<endl;

    for (int i=0;i<v.size();i++) cout<<v[i]<<"\t";
    cout<<endl;

    /// Evabeo declare kora jay
    vector <int> x(4,5); //Ekhane mot index number o protiti index er value specify kora hoyeche. 
	//4 holo mot index, 5 holo protiti index er value.
    x.push_back(100); //Pushback e last er dike value jukto hoy.
    for (int i=0;i<x.size();i++) cout<<x[i]<<"\t"; // tab

    cout<<endl;
    /// Use of Iterator >> like as pointer.
    vector <int>::iterator y,z; //  y akta iterator , jeta kono int vector er jekono element ke access korte parbe;
    puts (""); // For new line.
    y=v.begin(); // v vector er first element er dike point kore thakbe
    z=x.begin(); // x vector er first element er dike point kore thakbe
    cout<<*y<<endl; // * Called staric symbyl.
    cout<<*z<<endl;
    cout<<endl;
    y++,z++; // Akhon tara nij nij vector er next element point kore ache
    cout<<*y<<endl; // * Called staric symbyl.
    cout<<*z<<endl;

    /// Differnt datatype er jonno diffrent iterator create korte hoy.
    vector <float> a;
    vector <float>::iterator b;
    vector <char> a1;
    vector <char>::iterator b1;

    /// How to print the value of vector by using iterator
    for (z=x.begin();z!=x.end();z++) cout<<*z<<"\t";
	
	
	
	*/
