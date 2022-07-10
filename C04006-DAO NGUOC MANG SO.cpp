#include<stdio.h>
int main(){
	int a[103];
	int n;
	scanf("%d",&n);
	for (int i = 1; i <= n; ++i)
	{
		scanf("%d",&a[i]);
	}
	for (int i = n; i >0; i--)
	{
		printf("%d ",a[i]);
	}
	return 0;
}