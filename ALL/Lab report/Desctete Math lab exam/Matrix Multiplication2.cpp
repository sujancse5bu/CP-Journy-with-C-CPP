#include<bits/stdc++.h>
#define lli long long int
using namespace std; 
int main()
{
    int r1,c1,r2, c2, i, j, k;
    cout << "Enter number of rows and columns of 1st Matrix : ";
    cin >> r1 >> c1;
    cout << "Enter number of rows and columns of 2nd matrix : ";
    cin >> r2 >> c2; 
    int a[r1][c1], b[r2][c2], c[r1+1][c2+1]={0};
    if (c1 != r2)
    {
        cout << "Matrices cannot be multiplied!";
        return 0;
    }	
    cout << "Enter elements of matrix A : "<<endl;
    for (i = 0; i < r1; i++) for (j = 0; j < c1; j++) cin >> a[i][j];
    cout << "Enter elements of matrix B : "<<endl;
    for (i = 0; i < r2; i++) for (j = 0; j < c2; j++) cin >> b[i][j];		
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
        	c[i][j]=0;
            for (k = 0; k < r2; k++)
            {
                c[i][j]+=(a[i][k]*b[k][j]);
            }
        }
    }
    cout << "Product of matrices\n";
    for (i = 0; i < r1; i++)
    {    
        for (j = 0; j < c2; j++)
            cout << c[i][j] << "  ";
        cout << "\n";
    }
    return 0;
}
