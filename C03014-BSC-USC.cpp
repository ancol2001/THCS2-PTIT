#include <stdio.h>
#include <math.h>
long long ucln(long long a, long long b){
	if (a%b!=0)
	{
		ucln(b,a%b);
	}
	else return b;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
	long long a,b;
	scanf("%lld%lld",&a,&b);
	printf("%lld %lld\n",(a*b)/ucln(a,b),ucln(a,b));
	}
}