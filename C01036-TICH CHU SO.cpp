#include<stdio.h>
#include<math.h>
int main(){
	long long a;
	scanf("%lld",&a);
	long long dem=1;
	while(a!=0){
		dem=dem*(a%10);
		a=a/10;
	}
	printf("%lld\n",dem);
}