#include<stdio.h>
int main()
{
	int a[100][100],b[100][100],s,n,m,i,j;
	printf("enter rows");
	scanf("%d",&n);
	printf("enter coulmn");
	scanf("%d",&m);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
	          printf("%d\t",a[i][j]+b[i][j]);
		}
		printf("\n");
	}
	
	
}
