#include<stdio.h>
#include <math.h>
int main(){
	int t;scanf("%d",&t);
	int dem=1;
	while(t--){
	int n,m;
	int a[104];
	int b[104];
	int x;
	scanf("%d%d%d",&n,&m,&x);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d",&a[i]);
	}
	for (int i = 1; i <= m; i++)
	{
		scanf("%d",&b[i]);
	}
	printf("Test %d:\n",dem);
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
	dem++;
	printf("\n");
}
}