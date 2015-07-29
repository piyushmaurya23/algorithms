#include<stdio.h>
void main()
{
	int x[100],n,i,j,key;
	printf("Enter number of elements to be sorted ");
	scanf("%d",&n);
	printf("Enter %d elements ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}
	for(i=1;i<n;i++)
	{
		key=x[i];
		j=i-1;
		while(j>=0 && x[j]>key)
		{
			x[j+1]=x[j];
			j--;
		}
		x[j+1]=key;
	}
	printf("Sorted elements in ascending order are: ");
	for(i=0;i<n;i++)
	{
		printf("%d ",x[i]);
	}
	printf("\n");
}