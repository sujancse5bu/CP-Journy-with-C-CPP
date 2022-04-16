#include <iostream>
#include <deque>
#include <iterator>
#include <vector>
#include <algorithm>
using namespace std;
deque <int> dq;
void dqo()
{
	cout<<"Deque contains: "; 
	for (int i=0;i<dq.size();i++) cout<<dq[i]<<' ';
	cout<<endl;
}
int main ()
{
	
	dq.push_back(10);
	dq.push_back(20);
	dq.push_back(40);
	dq.push_front(30);
	dq.push_back(30);
	dq.push_front(20);
	dq.push_back(30);
		dqo();
	cout<<"Value at position 2: "<<dq[2]<<endl;
	cout<<"Size: "<<dq.size()<<endl;
	cout<<"MaxSize: "<<dq.max_size()<<endl;//the maximum number of elements that a deque container can hold.
cout<<endl<<"insert() "<<endl;
	//Extends deque by inserting a new element val at a position.
	deque<int>::iterator it = dq.begin(); 
	it++;
	it = dq.insert(it, 100); //return the new position
	dq.insert(it+3, 500);
		dqo();
	cout<<*it<<endl;
	//Extends deque by inserting n new element of value val in the deque.
	dq.insert(it+3, 2, 0); 
		dqo();
	//Extends deque by inserting new element in the range [first, last).
	vector<int> v(5, -1);
	dq.insert(dq.end(), v.begin(), v.end()); 
		dqo();
cout<<endl<<"assign() "<<endl;
	// assign 5 values of 10 each 
    dq.assign(5, 10);  //resized in 5
		dqo();
	
	dq.assign(v.begin(), v.end());
		dqo();
	
	
	dq.resize(4); 
	dq.push_front(30);
	dq.push_back(30);
	dqo();
	
	dq.pop_back();
	dq.pop_front();
	dqo();
	cout<<"Front: "<<dq.front()<<endl;
	cout<<"Back: "<<dq.back()<<endl;
	
	dq.clear(); // erases all the element
	int p=dq.empty(); // return 1 if dq is empty
	
	
	// dq.swap(dq1); exchange values
	
	
    return 0;
}

