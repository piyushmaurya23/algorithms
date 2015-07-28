#include<stdio.h>
int linear_search(int[],int,int,int);
void main()
{
	int x[100],n,m,p,ctr,i;
	printf("Enter number of elements in the array ");
	scanf("%d",&n);
	printf("Enter %d elements into the array ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}
	printf("Enter the element to search ");
	scanf("%d",&m);
	ctr=0;
	p=linear_search(x,n,m,ctr);
	if(p==0)
	{
		printf("Element not found\n");
	}
        else
	{
		printf("Element is present at postion %d\n",p);
	}
			
}
	int linear_search(int x[],int n,int m,int ctr)
	{
		if(ctr>=n)
		{
			return 0;
		}
		else if(x[ctr]==m)
		{
			return ctr+1;
		}
		else
		{
			linear_search(x,n,m,++ctr);
		}			
	}
