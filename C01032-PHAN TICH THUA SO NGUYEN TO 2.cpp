#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main(){
	int n;
	scanf("%d",&n);
	for (int i = 2; i <= n ; i++)
	{
		while(n%i==0){
			n=n/i;
			printf("%d",i);
			if (n>=i)
			{
				printf("x");
			}
		}
	}
	printf("\n");
	return 0;
}