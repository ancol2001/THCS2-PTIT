#include <stdio.h>
int a[100][100];
void nhap(int n, int m){
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= m; ++j)
		{
			scanf("%d",&a[i][j]);
		}
	}
}
void in(int n, int m){
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= m; ++j)
		{
			printf("%d ",a[i][j] );
		}
		printf("\n");
	}
}
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	nhap(n,m);
	int x,y;
	scanf("%d%d",&x,&y);
	int c[100][100];
	for (int i = 1; i <= m; ++i)
	{
		c[x][i]=a[x][i];
		a[x][i]=a[y][i];
	}
	for (int i = 1; i <= m; ++i)
	{
		a[y][i]=c[x][i];
	}
	in(n,m);
	return 0;
}