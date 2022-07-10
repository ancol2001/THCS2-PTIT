#include<stdio.h>
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m+i; ++j)
		{
			if (j<i)
			{
				printf("~");
			}else{
				if (i==0 || i==n-1)
				{
					printf("*");
				}else{
					if (j==i || j==m+i-1)
					{
						printf("*");
					}else{
						printf(".");
					}
				}
			}
		}printf("\n");
	}
	return 0;
}