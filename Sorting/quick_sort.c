#include<stdio.h>
void quick_sort(int[],int,int);
int partition(int[],int,int);
int main()
{
	int a[100],n,i;
	printf("Enter number of elements in the array ");
	scanf("%d",&n);
	printf("Enter %d elements into the array ",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	quick_sort(a,0,n-1);
	printf("The sorted array is ");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
	return 0;
}
void quick_sort(int a[],int p,int r)
{
	int q;
	if(p<r)
	{
		q=partition(a,p,r);
		quick_sort(a,p,q-1);
		quick_sort(a,q+1,r);
	}
}
int partition(int a[],int p,int r)
{
	int x,i,j,temp,temp1;
	x=a[r];
	i=p-1;
	for(j=p;j<r;j++)
	{
		if(a[j]<=x)
		{
			i=i+1;
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
		temp1=a[i+1];
		a[i+1]=a[r];
		a[r]=temp1;
		return i+1;
}
