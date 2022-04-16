// C++ program for super ugly number 
#include<bits/stdc++.h> 
using namespace std; 
//function will return the nth super ugly number 
int ugly(int a[], int size, int n){ 
	if(n <= 0) return -1; //n cannot be negative hence return -1 if n is 0 or -ve 
	if(n == 1) return 1; 
	priority_queue<int, vector<int>, greater<int > > pq; // Declare a min heap priority queue 
	for(int i = 0; i < size; i++) pq.push(a[i]); // Push all the array elements to priority queue
	int count = 1, no; // once count = n we return no 
	while(count < n){ 
		no = pq.top(); // Get the minimum value from priority_queue 
		pq.pop(); 
		if(no != pq.top()) // If top of pq is no then don't increment count. This to avoid duplicate counting of same no. 
		{ 
			count++; //Push all the multiples of no. to priority_queue 
			for(int i = 0; i < size; i++) pq.push(no * a[i]); 
		} 
	}
	return no; // Return nth super ugly number 
} 
int main(){ /* Driver program to test above functions */
	int a[] = {2,3,5}; 
	int size = sizeof(a) / sizeof(a[0]); 
	cout << ugly(a, size, 10)<<endl; 
	return 0; 
} 

