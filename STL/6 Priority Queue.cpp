//by default C++ creates a max-heap for priority queue
#include <iostream>
#include <queue>
#include <iterator>
#include <vector>
#include <algorithm>
using namespace std;
queue <int> q;
int main ()
{
	priority_queue <int> pq; 
	pq.push(2);
	pq.push(0);
	pq.push(10); 
    pq.push(30); 
    pq.push(20); 
    pq.push(5); 
    pq.push(1); 
    cout<<"Priority Queue"<<endl;
    cout<<"Size: "<<pq.size()<<endl;
    cout<<"Elements: ";
    while (!pq.empty())
    {
    	cout<<pq.top()<<" ";
    	pq.pop();
	}
	cout<<endl;
    return 0;
    // pq1.swap(pq2) works
}
/*
Priority queues are a type of container adapters, 
specifically designed such that the first element of the queue
is the greatest of all elements in the queue and elements
  are in non increasing order
 (hence we can see that each element of the queue 
has a priority{fixed order}).
*/
