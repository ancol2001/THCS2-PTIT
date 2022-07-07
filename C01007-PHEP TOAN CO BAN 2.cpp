#include<stdio.h>
#include<math.h>
int main(){
	long long a,b;
	scanf("%lld%lld",&a,&b);
	printf("%lld\n%lld\n%lld\n%lld\n%lld\n%.2lf",a+b,a-b,a*b,a/b,a%b,(double) a/b );
	return 0;
}
