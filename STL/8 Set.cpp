#include <iostream>
#include <set>
#include <iterator>
using namespace std;
int main ()
{
	set<int> s;
	set<int>::iterator i;
	s.insert(50);
	s.insert(20);
	s.insert(40);
	s.insert(40);
	s.insert(30);
	s.insert(40);
	s.insert(50);
	s.insert(40);
	s.insert(50);
	s.insert(3);
	i=s.begin();
	cout<<"S: ";
	for (;i!=s.end();i++) cout<<*i<<" ";
	cout<<endl;
	// assigning the elements from gquiz1 to gquiz2 
    set <int> s2(s.begin(), s.end()); 
    // remove all elements up to 30 in s 
	s.erase(s.begin(), s.find(30)); 
	cout<<"S: ";
	for (i=s.begin();i!=s.end();i++) cout<<*i<<" ";
	cout<<endl;
	s.insert(230);
	s.insert(320);
	s.insert(4120);
	s.insert(5240);
	s.insert(410);
	s.insert(570);
	cout<<"S: ";
	for (i=s.begin();i!=s.end();i++) cout<<*i<<" ";
	cout<<endl;
	
	cout<<"s.lower_bound(50) : "<<*s.lower_bound(50)<<endl; 
	cout<<"s.upper_bound(50) : "<<*s.upper_bound(50)<<endl; 
	cout<<"s.size() : "<<s.size()<<endl; 
	cout<<"s.max_size() : "<<s.max_size()<<endl; 
	cout<<"s.empty() : "<<s.empty()<<endl; 
	s.erase(50);//position iterator diye chinhito korte hobe, value direct erase hobe 
	cout<<"S: ";
	for (i=s.begin();i!=s.end();i++) cout<<*i<<" ";
	cout<<endl;
	s.erase(410);
	cout<<"s.find(410): "<<*s.find(711)<<endl;//iterator position return kore, na pele end(
	cout<<"s.count(570): "<<s.count(570)<<endl;// 0 for not found
	
	
	
	
	
	
    return 0;
}
/*
Sets are a type of associative containers in which each element has to be unique,
because the value of the element identifies it. 
The value of the element cannot be modified once it is added to the set, 
though it is possible to remove and add the modified value of that element.
*/
