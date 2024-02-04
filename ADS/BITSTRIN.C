#include <stdio.h>
#include <conio.h>

void main()
{
	int setU[10],setA[10],setB[10],flag,j,unionAB[10],intersectionAB[10],diffAB[10],diffBA[10];
	int u[10]={1,2,3,4,5,6,7,8};
	int a[10]={2,3,5,7};
	int b[10]={2,4,6,8};
	int i;
	clrscr();
	printf("Universal Set\n\t");
	for(i=0;i<8;++i)
		printf("%d  ",u[i]);
	printf("\nBitstring for U\n\t");
	for(i=0;i<8;++i)
	{
		setU[i]=1;
		printf("%d  ",setU[i]);
	}
	//bitstring A
	for(i=0;i<8;++i)
	{
		flag=0;
		for(j=0;j<8;++j)
		{
			if(u[i]==a[j])
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
			setA[i]=1;
		else
			setA[i]=0;
	}

	printf("\nSet A \n\t");
	for(i=0;i<4;++i)
		printf("%d  ",a[i]);
	printf("\nBitstring for A\n\t");
	for(i=0;i<8;++i)
	{
		printf("%d  ",setA[i]);
	}
	//bitstring B
	for(i=0;i<8;++i)
	{
		flag=0;
		for(j=0;j<8;++j)
		{
			if(u[i]==b[j])
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
			setB[i]=1;
		else
			setB[i]=0;
	}

	printf("\nSet B \n\t");
	for(i=0;i<4;++i)
		printf("%d  ",b[i]);
	printf("\nBitstring for B\n\t");
	for(i=0;i<8;++i)
	{
		printf("%d  ",setB[i]);
	}
	//Union
	printf("\nUnion of A and B\n\t");
	for(i=0;i<8;++i)
	{
		unionAB[i]=setA[i]|setB[i];
		printf("%d  ",unionAB[i]);
	}
	//Intersection
	printf("\nIntersection of A and B\n\t");
	for(i=0;i<8;++i)
	{
		intersectionAB[i]=setA[i]&setB[i];
		printf("%d  ",intersectionAB[i]);
	}
	//Difference A-B
	printf("\nDifference A and B\n\t");
	for(i=0;i<8;++i)
	{
		if(setA[i]==1 && setB[i]==0)
			diffAB[i]=1;
		else
			diffAB[i]=0;
		printf("%d  ",diffAB[i]);
	}
	//Difference B-A
	printf("\nDifference B and A\n\t");
	for(i=0;i<8;++i)
	{
		if(setA[i]==0 && setB[i]==1)
			diffBA[i]=1;
		else
			diffBA[i]=0;
		printf("%d  ",diffBA[i]);
	}
	getch();
}
