//Queues are a type of container adaptors which operate in a first in first out (FIFO) type of arrangement. 
//Elements are inserted at the back (end) and are deleted from the front.
#include <iostream>
#include <queue>
#include <iterator>
#include <vector>
#include <algorithm>
using namespace std;
queue <int> q;
int main ()
{
	q.push(5);
	q.push(19);
	q.push(39);
	cout<<q.empty()<<endl;
	cout<<q.front()<<endl;
	cout<<q.size()<<endl;
	q.pop();
	// q.swap(q1); for exchange
	//q.emplace(100); same as push but not working
	cout<<"Queue: "<<endl;
	while(!q.empty())
	{
		cout<<q.front()<<endl;
		q.pop();
	}
    return 0;
}

