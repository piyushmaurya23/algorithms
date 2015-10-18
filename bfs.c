#include<stdio.h>
int main()
{
	int n,adj[10][10],i,j,visited[10],source,queue[10],front,rear,root;
	printf("Enter the number of vertices in the graph: ");
	scanf("%d",&n);
	printf("Enter the adjacency matrix:\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&adj[i][j]);
		}
	}
	for(i=1;i<=n;i++)
		visited[i]=0;
	printf("Enter the source of the graph: ");
	scanf("%d",&source);
	printf("The BFS traversal of graph is: ");
	front=rear=0;
	visited[source]=1;
	queue[rear++]=source;
	printf("%d ",source);
	while(front!=rear)
	{
		root=queue[front];
		for(i=1;i<=n;i++)
		{
			if(adj[root][i] && !visited[i])
			{
				visited[i]=1;
				queue[rear++]=i;
				printf("%d ",i);
			}
			front++;
		}
	}
	return 0;
}