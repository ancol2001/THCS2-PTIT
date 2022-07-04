#include<stdio.h>
#include<math.h>
int main(){
	long long  a,b;
	scanf("%lld %lld",&a,&b);
	if(b>0){
		printf("%lld \n%lld \n%lld \n%lld \n%lld \n%.2llf \n", a+b, a-b, a*b, a/b,a%b, (double)a/b);
	}
	else printf("0\n");
}