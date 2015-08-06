#include <stdio.h>
#include <stdlib.h>
void merge_sort(int [],int ,int);
void merge(int [],int ,int ,int);
int main()
{
	int array [50],i,n,p,r;
	printf("How many numbers you want to enter:");
	scanf("%d",&n);
	printf("Enter the Numbers:\n");
	for (i = 0; i < n; i++)
	{
		scanf("%d",&array[i]);
	}
	p=0;
	r=n-1;
	merge_sort(array,p,r);
	printf("Sorted array is:\n");
	for (i = 0; i < n; i++)
	{
		printf("%d\t",array[i] );
	}
	return 0;
}
void merge_sort(int array [],int p,int r)
{
	int q;
	if (p<r)
	{
		q = (p+r)/2;
		merge_sort(array,p,q);
		merge_sort(array,q+1,r);
		merge(array,p,q,r);
	}
}
void merge(int array [],int p,int q,int r)
{
	int n1,n2,i,j,k;
	n1 = q-p+1;
	n2 = r-q;
	int left[n1+1],right[n2+1];
	for (i = 0; i < n1; i++)
	{
		left[i] = array[p+i];
	}
	for (j = 0; j < n2; j++)
	{
		right[j] = array[q+j+1];
	}
	left[n1] = 9999;
	right[n2] = 9999;
	i=0;
	j=0;
	for (k = p; i < r; k++)
	{
		if (left[i]<=right[j])
		{
			array[k] = left[i];
			i++;
		}
		else 
		{
			array[k] = right[j];
			j++;
		}

	}
}