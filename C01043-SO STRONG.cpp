#include<stdio.h>
#include<math.h>
long long gt(long long n){
	if(n==0) return 1;
	int t=1;
	for(long long i=2;i<=n;i++){
    	t=t*i;
	}
	return t;
}
int main(){
    long long a,dem=0;
    scanf("%lld",&a);
    long long b=a;
    	while(a>0){
    		int r=a%10;
    		dem+=gt(r);
    		a/=10;
		}
	if(b==dem) printf("1\n");
	else printf("0\n");
    return 0;
}
