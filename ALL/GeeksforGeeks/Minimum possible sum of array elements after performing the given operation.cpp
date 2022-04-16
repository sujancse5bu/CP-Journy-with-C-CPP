// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

// Function to return the minimized sum
ll minSum(int arr[], int n, int x)
{
    ll sum = 0;

    // To store the largest element
    // from the array which is
    // divisible by x
    int largestDivisible = -1, minimum = arr[0];
    for (int i = 0; i < n; i++) {

        // Sum of array elements before
        // performing any operation
        sum += arr[i];

        /// If current element is divisible by x
        /// and it is maximum so far
        if (arr[i] % x == 0 && largestDivisible < arr[i])
            largestDivisible = arr[i];

        // Update the minimum element
        if (arr[i] < minimum)
            minimum = arr[i];
    }

    // If no element can be reduced then there's no point
    // in performing the operation as we will end up
    // increasing the sum when an element is multiplied by x
    if (largestDivisible == -1)
        return sum;

    // Subtract the chosen elements from the sum
    // and then add their updated values
    ll sumAfterOperation = sum - minimum - largestDivisible
                           + (x * minimum) + (largestDivisible / x);

    // Return the minimized sum
    return min(sum, sumAfterOperation);
}

// Driver code
int main()
{
    int arr[] = { 5, 5, 5, 5, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 3;
    cout << minSum(arr, n, x);

    return 0;
}
