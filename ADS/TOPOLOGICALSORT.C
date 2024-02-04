#include <stdio.h>
#include <conio.h>
int n,i,j,cost[10][10],indeg[10],flag[10],count=1,span[10],x=0,k;
void main()
{
	clrscr();
	printf("Enter the vertices\n");
	scanf("%d",&n);
	printf("Cost adjacency matrix\n");
	for(i=1;i<=n;++i)
	{
		for(j=1;j<=n;++j)
		{
			scanf("%d",&cost[i][j]);
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
	//clear indegeree
	for(i=1;i<=n;++i)
	{
		indeg[i]=0;
		flag[i]=0;
	}
	//calculate indegree
	for(i=1;i<=n;++i)
	{
		for(j=1;j<=n;++j)
		{
			if(cost[j][i]!=0)
				indeg[i]++;
		}
	}
	/*for(i=1;i<=n;++i)
	{
	       printf("%d ",indeg[i]);
	} */
	while(count<=n)
	{
		for(i=1;i<=n;++i)
		{
			if(indeg[i]==0 && flag[i]==0)
			{
				x++;
				span[x]=i;
				flag[i]=1;
				for(k=1;k<=n;++k)
				{
					if(cost[i][k]!=0)
						indeg[k]--;
				}
			}
		}
		count++;
	}
	if(x!=n)
		printf("Forms a cycle");
	else
		for(i=1;i<=n;++i)
			printf("%d ",span[i]);
	getch();
}