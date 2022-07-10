#include<stdio.h>
#include<math.h>
int snto(long long a){
	int dem=0;
		for (int j = 1; j <= sqrt(a); j++)
		{
			if(a%j==0){dem++;}
		}
		if (dem==1)
		{
			return 1;
		}
}
int main(){
	int n;
	scanf("%d",&n);
		for (long long i = 2; n>0 ; i++)
		{
			if (snto(i)==1)
			{
				printf("%lld\n",i);
				n--;
			}
		}
	}
