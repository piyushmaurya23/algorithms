#include<stdio.h>
int main()
{
	int A[100],B[100],C[100],i,n,k,j;
	printf("Enter the number of elements to be sorted: ");
	scanf("%d",&n);
	printf("Enter %d elements to be sorted: ",n);
	for(i=1;i<=n;i++)
		scanf("%d",&A[i]);
	k=A[1];
	for(i=1;i<=n;i++)
	{
		if(A[i]>k)
			k=A[i];
	}
	for(i=0;i<=k;i++)
		C[i]=0;
	for(j=1;j<=n;j++)
		C[A[j]]=C[A[j]]+1;
	for(i=1;i<=k;i++)
		C[i]=C[i]+C[i-1];
	for(j=n;j>=1;j--)
	{
		B[C[A[j]]]=A[j];
		C[A[j]]=C[A[j]]-1;
	}
	printf("The sorted elements are: ");
	for(i=1;i<=n;i++)
		printf("%d ",B[i]);
	printf("\n");
	return 0;
}