#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long n;
		scanf("%lld",&n);
		long long tmp=0;
		while(n!=0){
			tmp=tmp+n%10;
			n=n/10;
		}
		if (tmp%10==0)
		{
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
}