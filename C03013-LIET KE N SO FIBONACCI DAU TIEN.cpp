#include<stdio.h>
int main(){
		long long a[100];
		a[0]=0;
		a[1]=1;
		a[2]=1;
		for (int i = 3; i <94; i++)
		{
			a[i]=a[i-1]+a[i-2];
		}
		int n;
		scanf("%d",&n);
		for (int i = 0; i < n; i++)
		{
			printf("%lld ",a[i]);
		}
		printf("\n");

	}
