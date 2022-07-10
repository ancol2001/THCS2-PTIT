#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < i+1; ++j)
		{
			if (i==0 || i== 1|| i==n-1)
			{
				printf("*");
			}else{
				if (j==0 || j== i)
				{
					printf("*");
				}else{
					printf(".");
				}
			}
		}printf("\n");
	}
	return 0;
}