/* Dynamic Programming C++ implementation of LIS problem */
#include<bits/stdc++.h> 
using namespace std; 

int lis( int arr[], int n ) // lis() returns the length of the longest increasing 
{ 							//subsequence in arr[] of size n 
	int lis[n]; 
	lis[0] = 1; 
	for (int i=1;i<n;i++) /* Compute optimized LIS values in bottom up manner */
	{ 
		lis[i]=1; 
		for (int j=0;j<i;j++) if(arr[j]<arr[i] && lis[j]+1>lis[i]) lis[i]=lis[j]+1;
	} 
	return *max_element(lis, lis+n); // Return maximum value in lis[] 
} 
	
/* Driver program to test above function */
int main() 
{ 
	int arr[] = { 10, 22, 9, 33, 21, 50, 41, 60 }; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	printf("Length of lis is %d\n", lis( arr, n ) ); 
	return 0; 
}

