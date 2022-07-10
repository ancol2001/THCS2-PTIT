#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < 2*n-1-i; ++j)
		{
			if(j<n-1-i){
				printf("~");
			}else{
				if(i==0||i==n-1){
				printf("*");}
				else{if (j==2*n-1-n-i||j==2*n-2-i)
				{
					printf("*");
				}else{printf(".");}}
			}
		}printf("\n");
	}
	return 0;
}