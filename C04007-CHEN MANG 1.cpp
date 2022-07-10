#include<stdio.h>
#include <math.h>
int main(){
	int n,m;
	int a[104];
	int b[104];
	scanf("%d%d",&n,&m);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d",&a[i]);
	}
	for (int i = 1; i <= m; i++)
	{
		scanf("%d",&b[i]);
	}
	int x;
	scanf("%d",&x);
	for (int i = 1; i <= x; ++i)
	{	
		printf("%d ", a[i]);
	}
	for (int i = 1; i <= m; ++i)
	{
		printf("%d ",b[i]);
	}
	for (int i = x+1; i <= n; i++)
	{
		printf("%d ",a[i] );
	}
}