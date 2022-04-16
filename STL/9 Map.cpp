#include <iostream>
#include <map>
#include <iterator>
using namespace std;
	map<int,int> mp,mp1;
	map<int,int>::iterator i,i1,i2;
void out ()
{
	cout<<"KEY\tELEMENT\n"; 
    for (i=mp.begin();i!=mp.end();++i) { 
        cout<<i->first<<'\t'<<i->second <<'\n'; 
    } 
}
int main ()
{
cout<<"map_name.insert({key,element});"<<endl;
	mp.insert({ 5, 70 }); 
	mp.insert({ 2, 30 }); 
    mp.insert({ 1, 70 }); 
    mp.insert({ 3, 60 });
	out();//key er sorted akare print hobe
	cout<<"max_size(): "<<mp.max_size()<<endl;
cout<<"map_name.insert(iterator position,{key,element});"<<endl;
	i=mp.find(3); 
	cout<<(i->second)<<endl;
	mp.insert(i,{4,80}); 
	cout<<((i)->second)<<endl;
	out();
cout<<"iterator map_name.insert(iterator position1, iterator position2);"<<endl;
	mp1.insert(mp.begin(), mp.end());
cout<<"map_name.count(key k);"<<endl; //returns 1 or 0
	cout<<"mp.count(3): "<<mp.count(3)<<endl;
	cout<<"mp.count(5): "<<mp.count(5)<<endl;
	cout<<"mp.count(7): "<<mp.count(7)<<endl;
cout<<"iterator map_name.equal_range(key)"<<endl;
	mp.insert({ 6, 30 }); 
    mp.insert({ 7, 70 }); 
    mp.insert({ 8, 60 });
    mp.insert({ 9, 30 }); 
    mp.insert({ 0, 70 }); 
    mp.insert({ -1, 60 });
    out();
    /*pair<map<int, int>::iterator, map<int, int>::iterator> it;
    it=mp.equal_range(2); //not clear to me
    cout<<"The lower bound is "<<it.first->first<<":"<<it.first->second<<endl;
    cout<<"The upper bound is "<<it.second->first<<":"<<it.second->second<<endl; */
cout<<"map_name.erase(key)"<<endl;
	mp.erase(8); 
    mp.erase(9); 
    mp.erase(10); 
    out();
//cout<<"map_name.erase(iterator1,iterator2)"<<endl;
	// function to erase in a given range 
    // find() returns the iterator reference to 
    // the position where the element is 
/*map find() function in C++ STL– Returns an iterator to the element with key 
value ‘g’ in the map if found, else returns the iterator to end.*/
	
	
	cout<<endl<<endl;
	
	/*Multimap in C++ Standard Template Library (STL)
	Multimap is similar to map with an addition that multiple elements can have same keys. 
	Rather than each element being unique, 
	the key value and mapped value pair has to be unique in this case.*/
	
	multimap <int, int> gquiz1;        // empty multimap container 
  
    // insert elements in random order 
    gquiz1.insert(pair <int, int> (1, 40)); 
    gquiz1.insert(pair <int, int> (2, 30)); 
    gquiz1.insert(pair <int, int> (3, 60)); 
    gquiz1.insert(pair <int, int> (4, 20)); 
    gquiz1.insert(pair <int, int> (5, 50)); 
    gquiz1.insert(pair <int, int> (6, 50)); 
    gquiz1.insert(pair <int, int> (6, 10)); 
  
    // printing multimap gquiz1 
    multimap <int, int> :: iterator itr; 
    cout << "\nThe multimap gquiz1 is : \n"; 
    cout << "\tKEY\tELEMENT\n"; 
    for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr) 
    { 
        cout  <<  '\t' << itr->first 
              <<  '\t' << itr->second << '\n'; 
    } 
    cout << endl; 
  
    // assigning the elements from gquiz1 to gquiz2 
    multimap <int, int> gquiz2(gquiz1.begin(),gquiz1.end()); 
  
    // print all elements of the multimap gquiz2 
    cout << "\nThe multimap gquiz2 after assign from gquiz1 is : \n"; 
    cout << "\tKEY\tELEMENT\n"; 
    for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) 
    { 
        cout << '\t' << itr->first 
             << '\t' << itr->second << '\n'; 
    } 
    cout << endl; 
  
    // remove all elements up to element with value 30 in gquiz2 
    cout << "\ngquiz2 after removal of elements less than key=3 : \n"; 
    cout << "\tKEY\tELEMENT\n"; 
    gquiz2.erase(gquiz2.begin(), gquiz2.find(3)); 
    for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) 
    { 
        cout << '\t' << itr->first 
             << '\t' << itr->second << '\n'; 
    } 
  
    // remove all elements with key = 4 
    int num; 
    num = gquiz2.erase(4); 
    cout << "\ngquiz2.erase(4) : "; 
    cout << num << " removed \n" ; 
    cout << "\tKEY\tELEMENT\n"; 
    for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) 
    { 
        cout << '\t' << itr->first 
             << '\t' << itr->second << '\n'; 
    } 
  
    cout << endl; 
  
    //lower bound and upper bound for multimap gquiz1 key = 5 
    cout << "gquiz1.lower_bound(5) : " << "\tKEY = "; 
    cout << gquiz1.lower_bound(5)->first << '\t'; 
    cout << "\tELEMENT = " << gquiz1.lower_bound(5)->second << endl; 
    cout << "gquiz1.upper_bound(5) : " << "\tKEY = "; 
    cout << gquiz1.upper_bound(5)->first << '\t'; 
    cout << "\tELEMENT = " << gquiz1.upper_bound(5)->second << endl; 
	
	
	
    return 0;
}
/*
Maps are associative containers that store elements in a mapped fashion. 
Each element has a key value and a mapped value. 
No two mapped values can have same key values.
*/
