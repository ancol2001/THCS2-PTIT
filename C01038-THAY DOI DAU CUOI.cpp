#include<stdio.h>
#include<math.h>
int main(){
	long long n;
	scanf("%lld",&n);
	int tmp;
		while(n>0){
			tmp=n%10;
			n=n/10;
			printf("%d",tmp);
			while (n%10==0)
			{
				n=n/10;
			}
		}
}