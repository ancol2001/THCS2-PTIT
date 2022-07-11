#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main(){
	int n;
	scanf("%d",&n);
	for (int i = 0; i < n; ++i)
	{
		int tmp=1;
		for (int j = 0; j < n; ++j)
		{
			if (j<=i)
			{
				printf("0 ");
			}else printf("%d ",tmp++);
		}printf("\n");
	}
	return 0;
}