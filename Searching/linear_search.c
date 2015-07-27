#include<stdio.h>
void main()
{
	int x[100],n,m,f,p,i;
	printf("Enter the number of elements in the array: ");
	scanf("%d",&n);
	printf("Enter %d elements into the array: ",n);
    for(i=0;i<n;i++)
    	scanf("%d",&x[i]);
    printf("Enter the element to be searched: ");
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
    	if(x[i]==m)
    	{
    		f=1;
    		p=i+1;
    		break;
    	}
    }
    if(f==1)
    	printf("Element found at position %d\n",p);
    else
    	printf("Element not found\n");
}