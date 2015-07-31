#include<stdio.h>
int binary_search (int x[],int,int,int,int);
int main()
{
	int x[100],n,m,p,i,upper,lower;
	printf("Enter the number of elements in the array ");
	scanf("%d",&n);
	printf("Enter %d elements into the array ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}
	printf("Enter the element to search in the array ");
	scanf("%d",&m);
	lower=0;
	upper=n-1;
	p=binary_search(x,n,m,lower,upper);
	if(p==0)
	{
		printf("Element not found\n");
	}
	else
	{
		printf("Element found at position %d\n",p);
	}
}
int binary_search(int x[],int n,int m,int lower,int upper)
{
	int mid=(lower+upper)/2;
	if(lower>=upper)
	{
		return 0;
	}
	else if(x[mid]==m)
	{
		return mid+1;
	}
	else if(x[mid]>m)
	{
		binary_search(x,n,m,lower,mid-1);
	}
	else if(x[mid]<m)
		binary_search(x,n,m,mid+1,upper);
	return 0;
}
