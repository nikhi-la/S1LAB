#include <stdio.h>
#include <conio.h>
void bfs(int);
int front=-1,rear=-1,queue[10],n,i,j,cost[10][10],x=1,visited[10],newarr[10];
void main()
{
	int v;
	clrscr();
	printf("Enter the number of vetices\n");
	scanf("%d",&n);
	printf("Enter the cost adjacency matrix\n");
	for(i=1;i<=n;++i)
	{
		for(j=i;j<=n;++j)
		{
			scanf("%d",&cost[i][j]);
			cost[j][i]=cost[i][j];
		}
	}
	printf("Cost adjacency matrix\n");
	for(i=1;i<=n;++i)
	{
		for(j=1;j<=n;++j)
		{
			printf("%d  ",cost[i][j]);
		}
		printf("\n");
	}
	printf("Enter the starting vertex\n");
	scanf("%d",&v);
	front++;
	rear++;
	queue[rear]=v;
	visited[v]=1;
	newarr[x]=v;
	bfs(v);
	if(x!=n)
		printf("No spanning tree");
	else
	{
		printf("Visited Order\n\t");
		for(i=1;i<=n;++i)
			printf("%d ",newarr[i]);
	}
	getch();
}
void bfs(int v)
{
	for(i=1;i<=n;++i)
	{
		if(cost[i][v]!=0 && visited[i]==0)
		{
			rear++;
			queue[rear]=i;
			visited[i]=1;
			x++;
			newarr[x]=i;
		}

	}
	if(front<=rear)
	{
		front++;
		bfs(front);
	}
}