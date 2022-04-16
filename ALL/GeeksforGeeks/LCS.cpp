/* A Naive recursive implementation of LCS problem */
#include<bits/stdc++.h>
using namespace std;
int max(int a, int b);
int lcs( char *X, char *Y, int m, int n )/* Returns length of LCS for X[0..m-1], Y[0..n-1] */
{
   if (m==0 || n==0) return 0;
   if (X[m-1]==Y[n-1]) return 1+lcs(X, Y, m-1, n-1);
   else return max(lcs(X, Y, m, n-1), lcs(X, Y, m-1, n));
}
int max(int a, int b)/* Utility function to get max of 2 integers */
{return (a > b)? a : b;}
int main()/* Driver program to test above function */
{
  char X[] = "AGGTAB";
  char Y[] = "GXTXAYB";
  int m = strlen(X);
  int n = strlen(Y);
  printf("Length of LCS is %d", lcs(X,Y,m,n));
  return 0;
}
