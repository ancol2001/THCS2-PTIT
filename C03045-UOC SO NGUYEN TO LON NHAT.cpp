#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long i=2,n;
		scanf("%lld",&n);
		while(i <= n/i){
			if (n%i == 0)
			{
				n/=i;
			}
			if (n%i != 0)
			{
				i++;
			}
		}
		printf("%lld\n",n);
	}
}
