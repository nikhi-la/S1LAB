#include <stdio.h>
#include <conio.h>
void dfs();
int n,i,cost[10][10],visited[10],x=1,newarr[10],j,v,stack[10],top=0,visited[10],flag,curr;
void main()
{
	clrscr();
	printf("Enter the vertices\n");
	scanf("%d",&n);
	printf("Cost adjacency matrix\n");
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
			printf("%d ",cost[i][j]);
		}
		printf("\n");
	}
	printf("Enter the starting vertex\n");
	scanf("%d",&v);
	stack[top]=v;
	visited[v]=1;
	newarr[x]=v;
	dfs();
	printf("Visited Array ");
	for(i=1;i<=n;++i)
		printf("%d  ",newarr[i]);
	getch();
}
void dfs()
{
	while(top>=0)
	{
		flag=0;
		curr=stack[top];
		for(i=1;i<=n;++i)
		{
			if(cost[curr][i]!=0 && visited[i]==0)
			{
				top++;
				stack[top]=i;
				visited[i]=1;
				x++;
				newarr[x]=i;
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			top--;

		}
	}
}