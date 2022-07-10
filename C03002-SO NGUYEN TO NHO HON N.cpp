#include<stdio.h>
#include<math.h>

void snto(int a){
		int dem=0;
		for (int i = 1; i <= sqrt(a); i++)
		{
			if(a%i==0){dem++;}
		}
		if (dem==1)
		{
			printf("%d\n",a);
		}
}
int main(){
	int n;
	scanf("%d",&n);
	if(n>2){
		printf("2\n");
		for (int i = 3; i <= n; i=i+2)
		{
			snto(i);
		}
	}
}