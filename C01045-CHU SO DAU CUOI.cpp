#include<stdio.h>
#include<math.h>
int main(){
	long long a;
	scanf("%lld",&a);
	int socuoi=a%10;
	long long dem=0;
	int sodau;
	while(a!=0){
		sodau=a%10;
		a=a/10;
	}
	printf("%d %d\n",sodau,socuoi);
}
