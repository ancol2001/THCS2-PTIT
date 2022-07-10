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
	long long a,b;
	scanf("%lld%lld",&a,&b);
	printf("%lld\n%lld\n",ucln(a,b),(a*b)/ucln(a,b));
}