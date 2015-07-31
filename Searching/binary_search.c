#include<stdio.h>
int main()
{
	int x[100],n,m,lower,upper,mid,i,p,f;
	printf("Enter the number of elements in the array ");
	scanf("%d",&n);
	printf("Enter %d elements in the array ",n);
	for(i=0;i<n;i++)
		scanf("%d",&x[i]);
	printf("Enter the element to be searched ");
	scanf("%d",&m);
	lower=0;
	upper=n-1;
	while(lower<upper)
	{
		mid=(lower+upper)/2;
		if(x[mid]==m)
		{
			f=1;
			p=mid+1;
			break;
		}
		else if(x[mid]<m) 
			lower=mid+1;     // Moving to right sub-array
		else
			upper=mid-1;     // Moving to left sub-array
	}
	if(f==1)
		printf("Element found at position %d\n",p);
	else
		printf("Element not found\n");
	return 0;
}
