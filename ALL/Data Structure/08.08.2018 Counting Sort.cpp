#include <stdio.h>
void counting_sort(int A[], int k, int n)
{
    int i,j;
    int B[15000], C[1000];
    for (i=0;i<=k;i++) C[i]=0;
    for (j=1;j<=n;j++) C[A[j]]++;
    for (i=1;i<=k;i++) C[i]=C[i]+C[i-1];
    for (j=n;j>=1;j--)
    {
        B[C[A[j]]]=A[j];
        C[A[j]]--;
    }
    printf("The Sorted array is : ");
    for(i=1;i<=n;i++)
        printf("%d ",B[i]);
}
int main()
{
    int n,k=0,A[15000],i;
    freopen ("Counting.txt","r",stdin);
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&A[i]);
        if (A[i]>k)k=A[i];
    }
    counting_sort(A,k,n);
    printf("\n");
    return 0;
}
