#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
	long long a;
	scanf("%lld",&a);
	long long dem=0;
	while(a!=0){
		dem=dem+a%10;
		a=a/10;
	}
	printf("%lld\n",dem);
}
}