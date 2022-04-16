#include <iostream>
#include <stack>
using namespace std;
int main ()
{
	stack <int> pq; 
	pq.push(2);
	pq.push(0);
	pq.push(10); 
    pq.push(30); 
    pq.push(20); 
    pq.push(5); 
    pq.push(1); 
    cout<<"Stack "<<endl;
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
