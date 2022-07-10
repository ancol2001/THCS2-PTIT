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
    long long n;
    scanf("%lld",&n);
    for (int i = 1; i < n; i++)
    {
    	long long dem=0;
    	long long b;
    	b=i;
    	while(b>0){
    		long long r=b%10;
    		dem=dem+gt(r);
    		b=b/10;
    	}
    	if (dem==i)
    	{
    		printf("%lld ",i);
    	}

    }
}
